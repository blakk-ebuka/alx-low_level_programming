#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: memory area destination
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}

	return (dest);
}
