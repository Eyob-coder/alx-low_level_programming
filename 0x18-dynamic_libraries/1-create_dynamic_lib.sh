#!/bin/bash
gcc -shared -o liball.so *.c
nm -D --defined-only liball.so
