#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int w;
	char *h;

	w = 1;
	h = (char *) &w;

	return ((int)*h);
}
