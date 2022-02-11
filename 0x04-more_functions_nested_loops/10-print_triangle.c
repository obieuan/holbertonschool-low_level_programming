#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check the code
 * @size: variable
 * Return: multi
 */

void print_triangle(int size)
{
	int x = 0;
	int y = 0;
	int a;

	if (size > 0)
	{
		while (y < size)
		{
			a = size - y - 1;
			while (x < size)
			{
				if (x < a)
					_putchar(32);
				else
					_putchar(35);
				x++;
			}
			_putchar(10);
			x = 0;
			y++;
		}
	}
	else
		_putchar(10);
}
