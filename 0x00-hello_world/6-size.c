#include <stdio.h>

/**
 * main - Program starts at main
 *
 * Description - Program to print the Size of the different intrinsic types in C.
 *
 * Return: Value of return is 0
 */

int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of char: %d byte(s)\n", sizeof(a));
	printf("Size of int: %d byte(s)\n", sizeof(b));
	printf("Size of long int: %d byte(s)\n", sizeof(c));
	printf("Size of long long int: %d byte(s)\n", sizeof(d));
	printf("Size of float: %d byte(s)\n", sizeof(e));

	return (0);
}
