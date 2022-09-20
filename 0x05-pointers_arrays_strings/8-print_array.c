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
	int n = 0;

	while (l < n)
	{
		printf("%d", a[l]);

		if (l < n - 1)
		{
			printf(", ");
		}
		l++;
	}
	printf("\n");
}
