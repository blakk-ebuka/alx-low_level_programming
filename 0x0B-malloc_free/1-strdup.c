#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string gives as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int m, len;

	m = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[m] = str[m]) != '\0')
		m++;

	return (dup);
}
