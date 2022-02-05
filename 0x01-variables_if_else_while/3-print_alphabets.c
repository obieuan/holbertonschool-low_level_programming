#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime el alfabeto en minusculas y mayusculas
 * Return: 0 always
 */
int main(void)
{
	int i = 97;

	do {
		putc(i, stdout);
		i++;
	} while (i < 123);
	i = 65;
	do {
		putc(i, stdout);
		i++;
	} while (i < 91);
	i = 10;
	putc(i, stdout);
	return (0);
}
