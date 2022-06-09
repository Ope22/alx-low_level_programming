#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: accepts an int argument
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int t;

	if (n < 0)
		n = -n;
	t = n % 10;
	if (t < 0)
		t = -t;
	_putchar(t + '0');
	return (t);
}
