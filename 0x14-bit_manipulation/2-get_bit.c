#include "main.h"
/**
 * get_bit - retorna el valor del bit de la posicion dada
 * @n: numero binario
 * @index: posicion
 * Return: valor del bit en la posicion, -1 en error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int contador;

	contador = 0;
	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (contador == index)
			return (n & 1);
		n = n >> 1;
		contador++;
	}
	if (contador < index)
		return (0);
	return (-1);
}
