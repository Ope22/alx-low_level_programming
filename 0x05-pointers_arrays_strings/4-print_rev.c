#include "main.h"
#include <string.h>
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: as first parameter
 * Return: the string in reverse and append newline.
 */

void print_rev(char *s)
{
	int a, b;

	a = strlen(s);
	for (b = a; b >= 0; b--)
	{
		if (s[b] != 0; b--)
			_putchar(s[b]);
	}
	_putchar('\n');
}
