#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - genetates random passwords
 * Return: 0
 */
int main(void)
{
	int m;
	char c;

	strand(time(NULL));
	while (m <= 2645)
	{
		c = rand() % 128;
		m += c;
		putchar(c);
	}
	putchar(2772 - m);
	return (0);
}
