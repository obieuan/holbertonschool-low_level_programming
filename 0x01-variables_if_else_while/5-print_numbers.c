#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime numeros del 0 al 9
 * Return: 0 always
 */
int main(void)
{
    int i=0;
    do
    {
        printf("%d",i);
        i++;
    } while (i<10);
	return (0);
}
