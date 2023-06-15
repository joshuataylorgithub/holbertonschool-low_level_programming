#!/bin/bash
C_FILES=$(ls *.c)
for file in $C_FILES; do
	gcc -c $file
done
ar rcs liball.a *.o
rm *.o
echo "static library liball.a created successfully"

