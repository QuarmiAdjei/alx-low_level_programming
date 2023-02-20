#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all single digit number of base 10
 * starting from 0
 * Return: always 0 (right)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
	for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
