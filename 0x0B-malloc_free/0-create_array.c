#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to be created
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);

	m = (char *) malloc(sizeof(char) * size);

	if (m == NULL)
		return (0);

	while (n < size)
	{
		*(m + n) = c;
		n++;
	}

	*(m + n) = '\0';

	return (m);
}
