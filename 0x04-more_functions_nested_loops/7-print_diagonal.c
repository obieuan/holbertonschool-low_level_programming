#include "main.h"
/**
 * print_diagonal - check the code
 * @n: number received
 * Return: multi
 */
void print_diagonal(int n)
{
	int i = 0;
	int a = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a != n; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}

}
