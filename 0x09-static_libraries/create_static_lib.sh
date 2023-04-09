#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rc liball.a *.o

# Index the symbols in the library for faster linking
ranlib liball.a

# Clean up the object files
rm *.o

