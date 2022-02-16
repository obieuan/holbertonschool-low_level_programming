#include "main.h"
#include<stdio.h>
/**
 * _strncat - return size of strlen
 * @dest: destino
 * @src: fuente
 * @n: number of chars
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i <= n)
	{
        dest[i] = src [i];
		i++;
	}
	return (dest);
}
