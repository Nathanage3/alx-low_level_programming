#!/bin/bash

# Compile all .c files in the current directory into PIC object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Create the dynamic library liball.so from the PIC object files
gcc -shared -o liball.so *.o

# Clean up: remove the object files
rm -f *.o
