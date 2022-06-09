#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n: receive an integer as an argument
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	int t;

	if (n < 0)
	{
		t = -1 * n;
		return (t);
	}
	else
	{
		return (n);
	}
}
