#include "main.h"

void print_alphabet(void)
{
	int alpha_lower;

	for (alpha_lower = 97; alpha_lower <= 122; alpha_lower++)
		_putchar(alpha_lower);
	_putchar('\n');
}
