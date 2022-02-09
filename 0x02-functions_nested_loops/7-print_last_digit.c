#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Esta revisa si C es minúscula
 * @n: variable que recibe
 * Return: n
 */
int print_last_digit(int n)
{
	int recibido = n;

	recibido = n % 10;
	if (n < 0)
	{
		recibido = recibido * -1;
	}
	_putchar(recibido + '0');
	return (recibido);
}
