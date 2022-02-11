#include "main.h"
/**
 * _isupper - check the code
 * @c:variable que recibe
 * Return: 1 if upper 0 if lower
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
