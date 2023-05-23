#include "main.h"

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
