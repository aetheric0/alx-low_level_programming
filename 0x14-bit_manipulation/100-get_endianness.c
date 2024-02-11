#include "main.h"

/**
 * get_endianness - determines the endianness of a system
 * Return: 0 on Success!
 **/

int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (*p == 1)
		return (1);
	else
		return (0);
}
