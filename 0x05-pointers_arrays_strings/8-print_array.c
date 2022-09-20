#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the element of an array
 * @a: an integer value
 * @n: another integer value
 * Return: 0
 */
void print_array(int *a, int *n)
{
	short i = 0;

	while (n-- > 0)
	{
		printf("%d", a[i++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
