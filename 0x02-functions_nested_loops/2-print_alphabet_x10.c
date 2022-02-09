#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Esta funcion  imprime el alfabeto
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int a = 0;

	for (a = 0; a < 11; a++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
