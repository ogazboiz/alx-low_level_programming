#include "main.h"
#include <stdio.h>

/**
 *print_array- check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
