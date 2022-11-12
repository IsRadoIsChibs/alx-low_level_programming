#!/bin/bash
gcc -std=gnu89 -c *.c
ar -rc libschool.a *.o
