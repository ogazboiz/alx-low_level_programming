#include <stdio.h>
/**
 * main - print the sum of all multiples of 3 and 5 less than 1024
 * Return:  (0)
 */
int main(void)
{
	unsigned long int m;
	int i;
	m = 0;

	for (i = 0; i < 1024; ++i)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
		       m = m + i;
		}
	}
	printf("%ld\n", m);
	return (0);
}	
