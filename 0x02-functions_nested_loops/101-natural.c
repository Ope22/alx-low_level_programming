#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum1, sum2, sum;
	int a;

	sum1 = 0;
	sum2 = 0;
	sum = 0;

	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			sum1 = sum1 + a;
		}
		else if ((a % 5) == 0)
		{
			sum2 = sum2 + a;
		}
	}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	return (0);
}
