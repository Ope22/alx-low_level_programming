#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 *
 * @s: as first parameter
 * Return: the string in reverse.
 */

void rev_string(char *s)
{
	/**
	 * int a, b;
	 *
	 * a = strlen(s);
	 * for (b = a; b >= 0; b--)
	 * {
	 * 	if (s[b] != '\0'
	 * 		return (s[b]);
	 * }
	 */

	int i, n = strlen(s);
	char ch;

	for (i = 0; i < n / 2; i++)
	{
		ch = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = ch;
	}
}
