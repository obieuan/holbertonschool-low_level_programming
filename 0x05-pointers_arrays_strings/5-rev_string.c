#include "main.h"
/**
 * rev_string - return size of strlen
 * @s: pointer 1
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;
	int i;
	int size;
	char aux[10];

	while (s[c] != '\0')
	{
		c++;
	}
	size = c;

	for (i = 0; i < size; i++)
	{
		aux[size-i-1] = s[i];
	}

	for (i = 0; i < size; i++)
	{
		s[i] = aux[i];
	}
}
