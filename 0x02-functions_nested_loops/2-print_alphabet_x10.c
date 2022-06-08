#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a = 1;
	char i;

	while (a <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		a++;
	}
}
