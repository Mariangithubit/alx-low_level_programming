#!/bin/bash
gcc -Wall -pedanctic -Wextra -Werror -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
