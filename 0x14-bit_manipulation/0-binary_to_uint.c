#include "main.h"
/**
 * binary_to_uint - convierte numero binario a int sin signo
 * @b: puntero a string de 0 y 1 chars
 * Return: numero convertido, o 0 si hay error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
		{
			num += 1;
		}
	}
	return (num);
}
