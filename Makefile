all:
	gcc src/main.c -std=c99 -fopenmp

mac:
	gcc-11 src/main.c -std=c99 -fopenmp
