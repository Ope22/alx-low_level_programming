#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: as first parameter
 */

void puts_half(char *str)
{
	int a, b = strlen(str), n = strlen(str) / 2;

	if (b % 2 == 0)
	{
		for (a = n; a < b; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		n = (strlen(str) - 1) /2;
		for (a = n + 1; a < b; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
