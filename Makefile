all:
	gcc -o memalloc.so -fPIC -shared malloc.c
