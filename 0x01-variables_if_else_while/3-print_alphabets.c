#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet or letters to smallercase
 * and uppercase
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
		for (al = 'A'; al <= 'Z'; al++)
		{
			putchar(al);
		}
	putchar('\n');
	return (0);
}
