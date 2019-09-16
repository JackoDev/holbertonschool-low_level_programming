#!/bin/bash
gcc -fPIC -c *.c | gcc -shared -fPIC -o liball.so *.o

