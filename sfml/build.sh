#!/bin/bash

echo $1
# $filename = $1
# echo $filename

#$ARR=(${filename//,/ })

#echo $ARR[0]

g++ -c $1

COMPILED=${1/.cpp/.o}

echo $COMPILED

g++ $COMPILED -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system