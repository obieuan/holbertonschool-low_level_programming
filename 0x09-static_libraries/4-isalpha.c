#include "main.h"
/**
 * _isalpha - Esta revisa si C es minúscula
 * @c: variable que recibe
 * Return: 1 == if lower 1 == if caps
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
