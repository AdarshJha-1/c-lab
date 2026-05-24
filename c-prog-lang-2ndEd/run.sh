#!/bin/bash

# I don;t remember how to write bash script but i can do something like this for my code...a simple build script

path=$1 # get the file name, i.e run.sh hello.c -> fileName will store hello.c
rawFileName=${path##*/}  # wth i just found this on internet like really ??
fileName=${rawFileName%.*}
# echo ${fileName} ${path} ${rawFileName} # Got the filename

gcc -o bin/${fileName} -Wall -Werror "${path}"
bin/${fileName}