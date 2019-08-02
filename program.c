/*Write your C code here*/
#include <stdio.h>
#include <math.h>

int main() {
	int input;
	scanf("%d", &input);
	
	printf("%0.8f\n", sqrt(input));
	printf("%0.10f\n", exp(1));
	printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program\n");
}
