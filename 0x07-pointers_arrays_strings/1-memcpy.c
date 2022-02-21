#include "main.h"
#include <stdio.h>
/**
 * _memcpy - The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 * @dest: pointer to string
 * @src: byte a llenar
 * @n: numero de espacios
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
