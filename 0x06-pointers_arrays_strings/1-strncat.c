#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: no of bytes of src to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, f;

	m = 0;
	f = 0;

	while (dest[m] != '\0')
		m++;
	while (src[j] != '\0'; && m < n)
	{
		dest[m] = src[j];
		m++;
		j++;
	}
	dest[m] = '\0';

	return (dest);
}
