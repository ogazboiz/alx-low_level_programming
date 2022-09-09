#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assign a random number
 * that check if it is postive, negative, or zero then it print the number'
 * Return: 0
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is not number\n", n);
	}
	return (0);
}
