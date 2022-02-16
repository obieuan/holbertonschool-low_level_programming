#include "main.h"
#include <stdio.h>
/**
 * leet - return size of strlen
 * @n: pointer to string
 * Return: n
 */
char *leet(char *n)
{
	int i = 0;
	int j = 0;
	char flag[] =  "aAeEoOtTlL";
	char flag2[] = "4433007711";

	while (n[i] != '\0')
	{
		for (j = 0; flag[j] != '\0' && j < 10; j++)
		{
			if (n[i] ==  flag[j])
			{
				n[i] = flag2[j];
			}
		}
		i++;
	}
	return (n);
}
