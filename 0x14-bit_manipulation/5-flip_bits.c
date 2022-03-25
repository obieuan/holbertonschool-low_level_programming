#include "main.h"
/**
 * flip_bits - numero de bits que necesitas para cambiar
 * el numero a otro
 * @n: primer numero
 * @m: segundo numero
 * Return: bits a flipear
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int prueba = 0;
	unsigned long int revisar = 1;
	int contador = 0;
	unsigned int i = 0;

	contador = 0;
	prueba = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (revisar == (prueba & revisar))
			contador++;
		revisar <<= 1;
	}
	return (contador);
}
