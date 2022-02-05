#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime numeros del 0 al 9
 * Return: 0 always
 */
int main(void)
{
	int i = 48;

	do	{
		putc(i, stdout);
		i++;
	} while (i < 58);
	i = 10;
	putc(i, stdout);
	return (0);
}
