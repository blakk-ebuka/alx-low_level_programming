#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 * @a: 2D array to print
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
	}
}
