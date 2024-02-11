#include <stdio.h>

int main(void)
{
	int endian = 1;
	char *end;

	end = (char *)&endian;
	printf("%i", end[1]);
}
