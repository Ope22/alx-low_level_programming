#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, cents, num[] = {25, 10, 5, 2, 1};
	int res = 0, j;

	if (argc == 2)
	{
		for (cents = 1; cents < argc; cents++)
		{
			a = atoi(argv[cents]);
			if (a < 0)
			{
				break;
				printf("0\n");
				return (0);
			}
			else
			{
				for (j = 0; j < 5 && a >= 0; j++)
				{
					while (a >= num[j])
					{
						res++;
						a -= num[j];
					}
				}
			}
		}
		printf("%d\n", res);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
