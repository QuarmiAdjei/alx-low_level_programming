#include "main.h"

/**
 * times table - Print the 9 times table , starting with 0
 * Return: 0
 */

void times_table(void)

{
	int t, u, v, w, g;

	for (t = 0; t <= 9; t++)
	{
		for (u = 0; u <= 9; u++)
		{
			v = t = u;
			if (v > 9)
			{
				w = v % 10;
				g = (v - w) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(g + '0');
				_putchar(w + '0');
			}
			else
			{
				if (u != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(v + '0');
			}
		}
		_putchar('\n');
	}
}
