#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * Description: a program that prints all possible
 * different combination of two digits
 * Return: 0
 */
int main(void)
{i
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
