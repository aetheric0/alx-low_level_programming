#include <stdio.h>
#include <stdlib.h>

/**
 * convert - Converts input string to integer
 * @s: string to be converted
 * Return: Returns converted string
 **/

int convert(char *s)
{
	int num = atoi(s);

	return (num);
}

/**
 * change - Converts input string to integer
 * @num: converted input from terminal
 * Return: Returns change
 **/


int change(int num)
{
	const int arr[] = {1, 2, 5, 10, 25};
	int i, count = 0;

	while (num > 0)
	{
		for (i = 4; i >= 0; i--)
		{
			if (num >= arr[i])
			{
				num -= arr[i];
				count++;
				break;
			}
		}
	}

	return (count);
}

/**
 * main - Program that prints how much change is needed to the number
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise.
 **/


int main(int argc, char *argv[])
{
	int num, ans;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = convert(argv[1]);
	ans = change(num);

	printf("%d\n", ans);

	return (0);
}
