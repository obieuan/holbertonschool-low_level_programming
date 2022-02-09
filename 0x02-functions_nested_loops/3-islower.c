#include "main.h"
/**
 * _islower - Esta revisa si C es minúscula
 * @c: variable que recibe
 * Return: 1 == if lower 1 == if caps
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
