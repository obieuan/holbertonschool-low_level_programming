#include "main.h"
#include <stdio.h>
/**
 * cap_string - return size of strlen
 * @n: pointer to string
 * Return: n
 */
char *cap_string(char *n)
{
	int i = 0;
	int j = 0;
	char flag[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (n[i] >= 'a' && n[i] <= 'z')
	{
		n[i] = n[i] - 32;
	}

	while (n[i] != '\0')
	{
		for (j = 0; flag[j] != '\0'; j++)
		{
			if (n[i - 1] == flag[j] && n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
		}
		i++;
	}
	return (n);
}
