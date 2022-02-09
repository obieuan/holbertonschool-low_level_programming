#include "main.h"
#include <stdio.h>
/**
 * main - Esta funcion  imprime el texto _putchar
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	char cadena[] = "_putchar";
	int size = sizeof(cadena);

	for (i = 0; i < size; i++)
	{
		_putchar(cadena[i]);
	}
	_putchar(10);
	return (0);
}
