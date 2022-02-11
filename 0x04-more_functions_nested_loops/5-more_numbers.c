#include "main.h"
/**
 * more_numbers - check the code
 * Return: multi
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 10)
	{
		while (b <= 62)
		{
			if (b > 57)
			{
				c = 10;
				_putchar(49);
			}
			_putchar(b - c);
			b++;
		}
		b = 48;
		c = 0;
		a++;
		_putchar(10);
	}
}
