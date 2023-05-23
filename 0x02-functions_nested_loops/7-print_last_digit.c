#include "main.h"

int print_last_digit(int);

int main(void)
{
	int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

int print_last_digit(int a)
{
	int b = 0;

	if (a < 0)
	{
		b = -1 * a;
		b = b % 10;
		_putchar(b + '0');
	}

	else
	{
		b = a % 10;
		_putchar(b + '0');
	}

	return (b);
}
