#include <stdio.h>
#include "main.h"
/**
 * print_binary - imprime el numero en binario
 * @n: numero a imprimir
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	unsigned long int contador;

	num = contador = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		num = num << 1;
		num += n & 1;
		contador++;
		n = n >> 1;
	}
	while (num > 0)
	{
		_putchar((num & 1) + '0');
		num = num >> 1;
		contador--;
	}
	if (contador > 0)
	{
		while (contador != 0)
		{
			_putchar('0');
			contador--;
		}
	}
}
