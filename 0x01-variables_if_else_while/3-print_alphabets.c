#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar((c + i) - 32);
	}
	putchar(10);
	return (0);
}
