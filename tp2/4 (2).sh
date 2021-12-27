#/bin/bash

if [ -z "$1" ]
then
	echo "parametre manquant"


elif [ "$#" -ne 1 ]
then

	echo "beaucoup trop de parametre"


elif test -d $1
then
	echo "REPERTOIRE "


elif test -f $1
then
	echo "fichier"
else 
	echo "pas d'arborescence"
fi
