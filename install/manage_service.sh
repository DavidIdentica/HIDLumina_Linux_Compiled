
#!/usr/bin/env bash

# This Script is used to manage the Eye service,
# in order to check status , enable it
# or take differnent actions and decisions about it
# Location of service:
# /lib/systemd/system

# Service name : hidlum_sock.service

# Requeriments :
# sudo apt-get install -y xdotool

service_name="hidlum_sock.service"


while :
do
    echo "***** SELECT THE OPTION FOR SERVICE : ${service_name} ****"
    echo "1. Start Service "
    echo "2. Stop Service"
    echo "3. Check status"
    echo "4. Restart (Stop it and Start it)"
    echo "5. Reload Configuration File"
    echo "6. Conf Service to start on Boot"
    echo "7. Avoid Service to start on Boot"
    echo "8. Deamon Reload"
    echo "9. See LOGS"
    echo "10. Exit"

    seleccion=0
    read seleccion

    case $seleccion in
    1)
        echo "$seleccion Seleccionado (sudo systemctl start ${service_name}) "
        sudo systemctl start $service_name
        echo "Process Done"
        ;;
    2)
        echo "$seleccion Seleccionado (sudo systemctl stop ${service_name})"
        sudo systemctl stop $service_name
        echo "Process Done"
        ;;
    3)
        echo "$seleccion Seleccionado (sudo systemctl status ${service_name})"
        sudo systemctl status $service_name
        ;;
    4)
        echo "$seleccion Seleccionado (sudo systemctl restart ${service_name})"
        sudo systemctl restart $service_name
        ;;
    5)
        echo "$seleccion Seleccionado (sudo systemctl reload ${service_name})"
        sudo systemctl reload $service_name
        ;;
    6)
        echo "$seleccion Seleccionado (sudo systemctl enable ${service_name})"
        sudo systemctl enable $service_name
        ;;
    7)
        echo "$seleccion Seleccionado (sudo systemctl disable ${service_name})                                     "
        sudo systemctl disable $service_name
        ;;
    8)
        echo "$seleccion Seleccionado DEAMON (sudo systemctl daemon-reload)"
        sudo systemctl daemon-reload
        ;;
    9)
        echo "$seleccion Seleccionado LOG "
        sudo journalctl -e -u $service_name
        ;;
    10)
        echo "$seleccion Exit"
        break
        ;;
    esac

    echo "Hit Enter to continue"
    read
    clear
done

echo "Exit Programm : Hit Enter to continue"
read
clear

