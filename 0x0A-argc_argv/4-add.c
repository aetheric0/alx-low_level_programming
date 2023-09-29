#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise.
 **/
int main(int argc, char *argv[])
{
    int i;
    int add = 0;

    if (argc == 1)
    {
        printf("0\n");
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            if (isdigit(*argv[i]))
            {
                add += atoi(argv[i]);
            }
            else
            {
                printf("Error\n");
                return (1);
            }
        }
        printf("%d\n", add);
    }
    return (0);
}
