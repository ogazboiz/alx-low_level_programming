#include "main.h"
/**
 * print_alphabet - print all letter in lower case
 *
 * Return : 0
 */
void print_alphabet(void)
{
char letter;


	for (letter = 97; letter <= 122 ; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
}
