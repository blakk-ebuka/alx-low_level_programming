#include "main.h"

/**
 * *_strcpy - copy strg to another string
 * @dest: pointer
 * @src: pointer
 * Return: numbers dest
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
