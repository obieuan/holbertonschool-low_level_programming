#include "main.h"
/**
 * set_bit - cambia el bit a 1 en el indice
 * @n: numero en bit
 * @index: indice del bit a cambiar
 * Return: 1 si funciona, -1 si hay error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = 1 << index;
	*n = *n | b;
	return (1);
}
