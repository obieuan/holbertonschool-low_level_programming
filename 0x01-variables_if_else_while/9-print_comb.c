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

	do	{
		i++;
		putc(i, stdout);
		if (i != 57)
		{
			putc(44, stdout);
			putc(32, stdout);
		}
	} while (i < 57);
	i = 10;
	putc(i, stdout);
	return (0);
}
