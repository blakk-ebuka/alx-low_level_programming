#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing the list of character
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, n, o, cake;

	o = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		cake = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				o++;
				cake = 1;
			}
		}
		if (cake == 0)
		{
			return (o);
		}
	}

	return (0);
}
