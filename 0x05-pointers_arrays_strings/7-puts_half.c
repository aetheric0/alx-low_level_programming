#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str - string parameter
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = len  / 2; i < len; i++)
        {
		if ( len % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
        }
}
