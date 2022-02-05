#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime el alfabeto en minusculas y mayusculas
 * Return: 0 always
 */
int main(void)
{
    int i=48;
    do
    {
        putc(i,stdout);
        i++;
    } while (i<58);
    i=97;
    do
    {
        putc(i,stdout);
        i++;
    } while (i<123);
	return (0);
}
