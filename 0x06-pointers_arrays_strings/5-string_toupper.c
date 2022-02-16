#include "main.h"
#include <stdio.h>
/**
 * string_toupper - return size of strlen
 * @n: pointer to string
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
