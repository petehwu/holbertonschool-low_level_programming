#!/bin/bash
in_name=$1
out_name=$(echo $in_name| cut -d'.' -f 1) 
gcc -Wall -pedantic -Werror -Wextra $in_name -o $out_name 
