#include "main.h"
#include <string.h>

/**
 * puts2 -  a function that prints every othere character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: as first parameter
 * Return: every other character and append newline.
 */

void puts2(char *str)
{
	int a, b = strlen(str);

	for (a = 0; a < b; a++)
	{
		if(a % 2 == 1)
			continue;
		_putchar(str[a]);
	}
	_putchar('\n');
}
