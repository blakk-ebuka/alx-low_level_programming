#include <stdio.h>

/**
 * main - prints all single digit numbers of base,
 * followed by a new line, using putchar
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
