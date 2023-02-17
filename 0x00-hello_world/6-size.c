#include <stdio.h>
/**
 * main - Entry point
 * Return: must 0 (right)
 */
ini main(void)
{
	init a;
	long init b;
	long long init c;
	char d;
	float f;

	print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
