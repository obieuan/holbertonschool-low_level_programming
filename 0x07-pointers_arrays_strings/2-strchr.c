#include "main.h"
#include <stdio.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * @s: pointer to string
 * @c: byte a llenar
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
