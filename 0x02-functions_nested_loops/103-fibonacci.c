#include <stdio.h>

/**
 * main - fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int j, k, next, sum;
	int i;

	j = 1;
	k = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum +  j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", sum);

	return (0);
}



