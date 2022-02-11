#include "main.h"
/**
 * print_line - check the code
 * @n: number of times
 * Return: multi
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
