#include "main.h"
#include<stdio.h>
/**
 * _strncat - return size of strlen
 * @dest: pointer to array 1
 * @src: pointer to array 2
 * @n: number of chars
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (c = 0; c <= n; c++)
	{
		dest[i + c] = src[c];
	}

	dest[i + n] = '\0';
	return (dest);
}
