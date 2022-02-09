#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Esta revisa si C es minúscula
 * @n: variable que recibe
 * Return: n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = abs(n);
	}
	n = n % 10;
	return (n);
}
