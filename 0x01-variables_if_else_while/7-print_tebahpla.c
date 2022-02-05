#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime numeros del 0 al 9
 * Return: 0 always
 */
int main(void)
{
	int i = 122;

	do	{
		putc(i, stdout);
		i--;
	} while (i > 96);
	return (0);
}
