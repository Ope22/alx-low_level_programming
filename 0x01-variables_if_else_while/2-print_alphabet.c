#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar(c + i);
		i++;
	}
	putchar(10);
	return (0);
}
