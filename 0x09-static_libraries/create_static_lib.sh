#!/bin/bash
gcc -wall -mextra -werror -pedantic -c *.c
ar rc liball.a *.o
