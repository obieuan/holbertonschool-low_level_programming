#include "main.h"
#include <stdlib.h>
/**
 * times_table - This do stuff
 */
void times_table(void)
{
	int x, y, mult, a, b;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mult = x * y;
			if (mult == 0)
			{
				_putchar('0');
			}
			else if (mult > 0 && mult < 10)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				a = mult / 10 + '0';
				b = mult % 10 + '0';
				_putchar(a);
				_putchar(b);
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(10);
			}
		}
	}
}
