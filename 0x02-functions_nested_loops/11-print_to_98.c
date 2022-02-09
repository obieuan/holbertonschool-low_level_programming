#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - This do stuff
 * @n: primer numero
 * Return: algo
 */
void print_to_98(int n)
{
	int i;
	int ultimo = 98;

	if (n < 98)
	{
		for (i = n; i <= ultimo; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= ultimo; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}

		}
	}
	else
	{
		i = n;
		printf("%d", i);
	}
	putchar(10);

}
