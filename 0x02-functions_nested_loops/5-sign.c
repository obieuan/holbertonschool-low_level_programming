#include "main.h"
/**
 * print_sign - Esta revisa si C es minúscula
 * @n: variable que recibe
 * Return: 1 == if lower 1 == if caps
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
