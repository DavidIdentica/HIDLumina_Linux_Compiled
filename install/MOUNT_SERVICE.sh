
#!/usr/bin/env bash TODO : Finshe Script to Mount service

echo "### Iniciando Programa ###"

if [[ $EUID != 0 ]]; then
    echo "Please run as root"
    exit
fi


echo "-- Ran as root --"
serv_file="$PWD/hidlum_sock.service"
script_file=$PWD
script_file=${script_file%install}
script_file="${script_file}RUN_SOCKET"

mod_serv=0

{ # Try
    while IFS= read -r line
    do
        case "$line" in
	    *Exec*)
		echo "Found"
		len_line=${#line}
  		echo $len_line
		if [ $len_line -ge 11 ]
		then
		    echo "YA TIENE UN PATH GUARDADO - DESEA RECARGAR LA UBICACION?"
		    read user_dec
		    if [ $user_dec == 'si' ]
		    then
			echo "TODO: BORRAR UBICACION ANTERIOR"
		    fi

		else
		    mod_serv=1
		    echo "NUEVO"
		fi
		;;
	    *) ;;
	esac
    done < "$serv_file"
    echo "---------------"

} || { #Catch
    echo "Error Reading File"
    exit
}

if [ $mod_serv -eq 1 ]
then
   { # Try : Write Path in File

        echo "Archivo del servicio:  " $serv_file
        echo "Archivo de Script   :  " $script_file

        sed -i 's,ExecStart=*,ExecStart='"${script_file}"',' $serv_file
   } ||{ #Catch
        echo "Error Modificando ..."
        exit
   }
fi

{ #Try : Copy the file into Services Files
    echo "Montando Archivo"
    cp hidlum_sock.service /lib/systemd/system/
} || { #Catch
    echo "Error Copying"
    exit
}

echo "Mounted ..."
echo ""
echo "### Programa Finalizado ###"
