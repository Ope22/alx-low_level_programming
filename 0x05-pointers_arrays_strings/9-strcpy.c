#include "main.h"
#include <string.h>
/**
 * _strcpy - Write a unction that copies the string pointed to by src,
 * including the terminating null byte (\0), 
 * to the buffer pointed to by dest. 
 *
 * @dest: as first parameter
 * @src: as second parameter
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
