#include <stdio.h>
/**
 * main - Entry
 * Description: print the alphabet in lower case
 * and return in uppercase
 * Return o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';
	
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
