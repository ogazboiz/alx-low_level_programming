#include "main.h"
/**
 * main - it is to print _putchar
 * Return: Always 0
 */
int main(void)
{
	char name[9] = "_putchar";
	int i = 0;	
	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
