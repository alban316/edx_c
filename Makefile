convert: convert.c temp.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra convert.c temp.so -o convert

temp.so: temp.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c temp.c -o temp.so

