#include "main.h"

/**
 * _puts - should print a string,
 * followed by a new line.
 * @str: input string.
 * Return: no return
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
