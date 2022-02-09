#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - Esta revisa si C es minúscula
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar(48);
				_putchar('0' + h);
			}
			else
			{
				_putchar(h + '0');
			}
			_putchar(58);
			if (m < 10)
			{
				_putchar(48);
				_putchar('0' + m);
			}
			else
			{
				_putchar(m + '0');
			}

		}
	}
}
