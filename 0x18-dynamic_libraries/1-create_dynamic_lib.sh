#!/bin/bash

# Get a list of all the .c files in the current directory
c_files=$(ls *.c)

# Compile the .c files into object files
for c_file in $c_files; do
  gcc -c $c_file
done

# Create the dynamic library from the object files
gcc -shared *.o -o liball.so
