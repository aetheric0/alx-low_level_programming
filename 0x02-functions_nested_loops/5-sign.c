#include "main.h"

int print_sign(int n);

int main(void)
{
	int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		_putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		i = 0;
	}
	else
	{
		_putchar(45);
		i = -1;
	}
	return(i);
}