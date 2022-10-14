#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of arguments
 * @separator: separator between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *str;

	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && m == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
