#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char **argv)
{

	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
