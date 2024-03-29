#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - Print strings followed by a new line
 * @separator: separator between strings
 * @n: number of strings passed to function
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j, k;
	va_list ap;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
		{
			_putchar('n');
			_putchar('i');
			_putchar('l');
		}
		else
		{
			for (j = 0; string[j] != '\0'; j++)
				_putchar(string[j]);
			if (separator == NULL || i == (n - 1))
				;
			else
			{
				for (k = 0; separator[k] != '\0'; k++)
					_putchar(separator[k]);
			}
		}
	}

	va_end(ap);
	_putchar('\n');
}
