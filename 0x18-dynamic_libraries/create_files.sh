#!/bin/bash

# List of function names
functions=(
    "_putchar"
    "_islower"
    "_isalpha"
    "_abs"
    "_isupper"
    "_isdigit"
    "_strlen"
    "_puts"
    "_strcpy"
    "_atoi"
    "_strcat"
    "_strncat"
    "_strncpy"
    "_strcmp"
    "_memset"
    "_memcpy"
    "_strchr"
    "_strspn"
    "_strpbrk"
    "_strstr"
)

# Create source code files
for function in "${functions[@]}"
do
    echo "#include <stdio.h>" >> "${function}.c"
    echo "#include \"main.h\"" >> "${function}.c"
    echo "" >> "${function}.c"
    echo "/*" >> "${function}.c"
    echo " * Function: ${function}" >> "${function}.c"
    echo " * -----------------------------" >> "${function}.c"
    echo " * Implement your code here..." >> "${function}.c"
    echo " */" >> "${function}.c"
done

