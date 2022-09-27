#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int m;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (m = 0; m < size; m++)
	{
		sum += a[(size * m) + m];
		sum1 += a[(size * (m + 1)) - (m + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
