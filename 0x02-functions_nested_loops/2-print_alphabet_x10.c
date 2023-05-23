#include "main.h"

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int alpha_lower, i, a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			alpha_lower = i;
			_putchar(alpha_lower);
		}
		_putchar('\n');
	}
}
