#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n, last;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		last = n % 10;
		if (last > 5)
		{
			printf("%d is positive\n", n);
		}
		else if (last < 6 && last != 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
		return (0);
}
