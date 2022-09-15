#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 t0 14, followed by a new line.
 */
void more_numbers(void)
{
	char c, i;
	int a = 0;

	while (a < 10)
	{
		for (i = 0; i < 15; i++)
		{
			c = i;
			if (i > 9)
			{
				_putchar('1');
				c = i % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		a++;
	}
}
