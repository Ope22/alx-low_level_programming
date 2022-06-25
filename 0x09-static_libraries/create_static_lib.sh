#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra
ar -rc libmy.a *.o
ranlib libmy.a
