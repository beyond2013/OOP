#!/bin/bash

# Specify the directory path where you want to remove executable files
directory="./source/cpp/"

# Change directory to the specified directory
cd "$directory" || exit

# Use find command to locate executable files and remove them
find . -maxdepth 1 -type f -executable -exec rm {} +

