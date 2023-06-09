#!/bin/bash
gcc -c -Wall _Werror -Wextra -pedantic *.c
ar rcs libmy.a *.o
