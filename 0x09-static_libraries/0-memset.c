#include "main.h"
#include <stdio.h>
/**
 * _memset - return size of strlen
 * @s: pointer to string
 * @b: byte a llenar
 * @n: numero de espacios
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
