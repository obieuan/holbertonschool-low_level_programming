#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Esta funcion  imprime el alfabeto
 * Return: 0 always
 */
int main(void)
{
    int i=0;
    do
    {
        if (i != 113 && i != 101)
        {
            putc(i,stdout);
        }        
        i++;
    } while (i<123);
	return (0);
}
