#include "main.h"
#include <stdio.h>
/**
 * main - Esta funcion  imprime el texto _putchar
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	char cadena[] = "_putchar\n";
	int size = sizeof(cadena);

	for (i = 1; i < size; i++)
	{
		_putchar(cadena[i]);
	}
	return (0);
}
