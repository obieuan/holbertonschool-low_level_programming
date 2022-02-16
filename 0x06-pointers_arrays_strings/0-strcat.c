#include "main.h"
#include<stdio.h>
/**
 * _strcat - return size of strlen
 * @dest: pointer to array 1
 * @src: pointer to array 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (c = 0; c < (j + i); c++)
	{
		dest[i + c] = src[c];
	}

	dest[j + i] = '\0';
	return (dest);
}
