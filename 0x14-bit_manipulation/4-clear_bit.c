#include "main.h"
/**
 * clear_bit - cambia el bit a 0 en el indice
 * @n: numero en bit
 * @index: indice del bit a cambiar
 * Return: 1 si funciona, -1 si hay error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = ~(1 << index);
	*n = *n & b;
	return (1);
}
