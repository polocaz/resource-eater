#!/usr/bin/env sh


set -xe

mkdir -p build/
gcc -Wall -Wextra -o build/main main.c -lm
