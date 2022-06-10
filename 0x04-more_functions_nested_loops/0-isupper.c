#include "main.h"
#include <ctype.h>
/**
 * _isupper - a function that checks for uppercase character.
 * @c: as a parameter. If it's uppercase print 1 if otherwise return 0
 * Return: always 0 (success).
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
