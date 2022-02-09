#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - Esta revisa si C es minúscula
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			h1 = h / 10 + '0';
			h2 = h % 10 + '0';
			m1 = m / 10 + '0';
			m2 = m % 10 + '0';
			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
		}
	}
}
