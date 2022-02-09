#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Esta funcion  imprime el alfabeto
 * Return: 0 always
 */
void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
