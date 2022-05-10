#include "main.h"
/**
 * _strlen - return size of strlen
 * @s: pointer 1
 * Return: void
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
