#include <stdio.h>

/**
 * main - Entry Point
 * Description: print out the letter except p and e
 *
 * Return: 0
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
