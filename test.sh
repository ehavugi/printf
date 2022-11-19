#!/bin/bash
cp test/main.c main.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
./a.out
rm main.c
rm a.out
