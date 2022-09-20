#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return 0.
 */
void rev_string(char *s)
{
	char c;
	int a, i;

	a = strlen(s);
	for (i = 0; i < a / 2; i++)
	{
	c = s[i];
	s[i] = s[a - 1 - i];
	s[a - 1 - i] = c;
	}

}

