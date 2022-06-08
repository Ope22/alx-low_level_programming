#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line 
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, b1, b2, c1, c2;

	b = 1;
	c = 2;

	printf("%1lu", b);
	for (a = 1; a < 91; a++)
	{
		printf(", %1lu", c1 + (c2 / 1000000000));
		printf("%1lu", c2 % 1000000000);
		c1 += b1;
		b1 = c1 - b1;
		c2 += b2;
		b2 = c2 - b2;
	}
	printf("\n");
	return (0);
}
