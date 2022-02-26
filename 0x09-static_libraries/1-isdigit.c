#include "main.h"
/**
 * _isdigit - check the code
 * @c:variable que recibe
 * Return: 1 if upper 0 if lower
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
