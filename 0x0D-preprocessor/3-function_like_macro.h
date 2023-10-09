#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * absolute - gives the absolute value
 * @x: variable
 * Return: returns absolute value
 **/
int absolute(int);

int absolute(x)
{
	if (x < 0)
		x = -1 * (x);
	return (x);
}

#define ABS(x) absolute(x)

#endif
