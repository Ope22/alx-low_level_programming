#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{

	int add = 0, b, c;


	if (argc > 1)
	{
		for (b = 1; b < argc; b++)
		{
			for (c = 0; argv[b][c] != '\0'; c++)
			{
				if (!isdigit(argv[b][c]))
				{
					puts("Error");
					return (1);
				}
			}
			add += atoi(argv[b]);
		}

		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
