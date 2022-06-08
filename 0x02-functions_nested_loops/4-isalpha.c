#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: as a parameter. If it's alphabet print 1 if otherwise return 0
 * Return: Always 0.
 */

int_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
