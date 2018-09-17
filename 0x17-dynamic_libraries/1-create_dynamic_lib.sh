#!/bin/bash
gcc -g -fPIC -Werror -Wextra -pedantic *.c -shared -o liball.so
