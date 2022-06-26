#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
