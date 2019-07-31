#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	int randomNumber = 0;		
	int guess = 0;
	int numberOfGuesses = 5;
	time_t t;

	srand((unsigned) time(&t));

	randomNumber = rand () % 21;
	
	printf("\nEnter a number between 0 and 20:");

	for(numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
	{
	printf("\nYou have a %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
	printf("\nEnter a guess:");
	scanf("%d", &guess);

		if(guess == randomNumber)
		{	
		printf("\nCongratulations. You guessed it.\n");
		return 0;
		}
		else if(guess < 0 || guess > 20)		
		{
		printf("I said the number is between 0 and 20.\n");
		}	
		else if(randomNumber > guess)
		{
		printf("Sorry, %d is wrong number. My number is greater than that.\n", guess);
		}
		else if(randomNumber < guess)
		{
		printf("Sorry, %d is wrong number. My number is less than that.\n", guess);
		}
	}
	printf("\nYou have had five tries and failed.The numbers was %d\n", randomNumber);
	return 0;

}
