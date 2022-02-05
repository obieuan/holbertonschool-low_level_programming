#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime el alfabeto
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	do	{
		putc(i, stdout);
		i++;
	} while (i<123);
	i = 10;
	putc(i, stdout);
	return (0);
}
