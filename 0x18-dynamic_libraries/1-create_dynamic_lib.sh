#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o libhello.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
