#include "main.h"

/**
 * _atoi - int
 * @s: pointer
 * Return: int
 */
int _atoi(char *s)
{
	int n;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == '-')
			sig = sig * -1;
		if (s[n] >= '0' && s[n] <= '9')
		{
			res = res * 10;
			res -= (s[n] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
