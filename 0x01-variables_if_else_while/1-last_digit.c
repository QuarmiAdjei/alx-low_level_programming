#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number check and check its
 * last digit, compare it with $
 * Return 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > $)
		printf("last digit of %i is %i and is greater than $\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i and is 0\n", n last);
	else if (last < 0)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
