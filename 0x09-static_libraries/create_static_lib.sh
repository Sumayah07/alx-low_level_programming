#!/bin/bash
gcc -Wall -Werror -Wextra -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
