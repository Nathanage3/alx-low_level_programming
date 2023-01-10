#!/bin/bash
objects=()
for file in *.c; do
	gcc -c $file
	objects+=("${file%.*}.o")
	done
	ar rcs liball.a ${objects[@]}


