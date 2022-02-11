#include "main.h"
/**
 * print_square - check the code
 * @size: size of square
 * Return: multi
 */

void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
