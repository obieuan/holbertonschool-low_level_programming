#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime el alfabeto
 * Return: 0 always
 */
int main(void)
{
	int i = 47;
	int f = 48;

	while (i < 57)
	{
		i++;
		while (f < 57)
		{
			f++;
			putc(i, stdout);
			putc(f, stdout);
			putc(44, stdout);
			putc(32, stdout);
		}
		f = 48;
	}
	i = 10;
	putc(i, stdout);
	return (0);
}
