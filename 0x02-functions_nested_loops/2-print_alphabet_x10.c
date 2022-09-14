#include "main.h"

/**
 * main - prints 10 times the alphabet
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b =  97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
