#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: as a parameter. If it's greater than zero print 1 if otherwise return 0
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
