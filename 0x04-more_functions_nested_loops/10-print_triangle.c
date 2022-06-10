#include "main.h"

/**
 * print_triangle - a function that prints triangle on the terminal.
 * followed by a new line.
 * @size: as a parameter
 * Return: always 0 (success).
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');


			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}





