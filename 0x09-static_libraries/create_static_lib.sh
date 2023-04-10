#!/bin/bash

# Compile all .c files into object files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

ranlib liball.a

