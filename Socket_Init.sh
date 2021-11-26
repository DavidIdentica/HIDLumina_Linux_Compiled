#!/bin/bash

#Time to sleep
#sleep 5



start_proccess=0
tries_connection=0

while [ $start_proccess -eq 0 ]
do

wget -q --tries=5 --timeout=10 --spider http://google.com

if [[ $? -eq 0 ]]; then
        echo "Online"
        start_proccess=1
else
        echo "Offline"
fi


if [[ $tries_connection > 5 ]]; then
  start_proccess=2
fi

tries_connection=$(( $tries_connection+1 ))


done



# The xvfb is to run without a desktop
# sudo xvfb-run -a ~/Lib_HID/ARM_LIB/VCOMExample_v7.0.35131/bin

if [[ $start_proccess -eq 1 ]] ; then

	sudo rm -R ~/Log.txt
	sudo xvfb-run -a ~/Desktop/HIDLumina/Socket_telefonica_delv
fi
