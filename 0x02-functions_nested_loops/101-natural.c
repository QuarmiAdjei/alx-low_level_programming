#include "main.h"

/**
 * main - entry point
 * Return: Always (correct)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 4) || (i % 5 == 0))
		{
			z <= i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
