#include "main.h"

int _isalpha(int c);

int main(void)
{
	int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

int _isalpha(int c)
{

	int i, a;

	for (i = 65; i <= 122; i++)
	{
		if ( i >= 91 && i <= 96)
			a = 0;
		else if( c == i)
		{
			a = 1;
			break;
		}
		else
			a = 0;
	}

	return (a);
}
