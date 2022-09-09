#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet or letters to smallercase
 * Followed by a new line
 * Return: 0
 */

int main(void)
{
	char al;

		for (al = 'a'; al <= 'z'; al++)
		{
			putchar(al);
		}
	putchar('\n');
	return (0);
}
