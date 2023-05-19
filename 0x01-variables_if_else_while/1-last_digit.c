#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Program Starts here
 *
 * Return: return value is 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("The last digit of %d is %d and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("The last digit of %d is %d and is less than 5\n", n, m);
	return (0);
}
