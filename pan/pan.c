#include <stdio.h>

int main(int argc, char **argv) {
	int num = 5; // this should be random
	int num_guesses = 4; // this should be an argument, as should 1 to 10
	int guess;

	while (num_guesses > 0) {
		printf("Guess a number between 1 and 10:");
		scanf("%d", &guess);

		if (num == guess) {
			printf("Great guess!\n");
			num_guesses = 0;
		}

		else {
			num_guesses -= 1;

			if (num_guesses > 0) {
				printf("Try again!\n");
			}

			else {
				printf("No more guesses!\n");
			}
		}
	}

	printf("Game over!\n");
}
