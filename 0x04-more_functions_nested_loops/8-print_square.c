#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * followed by a new line.
 * @size: as a parameter
 * Return: always 0 (success).
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
