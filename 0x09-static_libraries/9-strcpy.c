#include "main.h"
/**
 * _strcpy - return size of strlen
 * @dest: pointer 1
 * @src: pointer 2
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
		int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
