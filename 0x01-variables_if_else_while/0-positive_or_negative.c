#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - Determines if a numbver is positive, negative or
 * zero
 * we shall see after applying our code on betty if it worked or not
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
