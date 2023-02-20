#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all single digit number of base 10
 * starting from 0
 * Return: 0 (successful)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');
	return (0);
}
