#include "main.h"

int _islower(int c);

int main(void)
{
	int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

int _islower(int c)
{

	int i, a;

	for (i = 97; i <= 122; i++)
	{
		if( c == i)
		{
			a = 1;
			break;
		}
		else
			a = 0;
	}

	return (a);
}
