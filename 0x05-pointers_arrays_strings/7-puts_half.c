#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: reference for a string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count
}
