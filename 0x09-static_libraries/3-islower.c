#include "main.h"
/**
 * * _islower - checks for lowercase
 * * description - return integer
 * * @c: c integer
 * * Return: 1 if lowercase
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
