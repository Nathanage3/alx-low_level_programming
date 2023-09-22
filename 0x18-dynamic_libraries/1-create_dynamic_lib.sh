#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.c
rm -f *.o

