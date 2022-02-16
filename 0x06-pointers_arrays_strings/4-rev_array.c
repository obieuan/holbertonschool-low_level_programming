#include "main.h"
#include<stdio.h>
/**
 * reverse_array - return size of strlen
 * @a: int 1
 * @n: int 2
 * Return: 0 si iguales o la resta si diferentes
 */
void reverse_array(int *a, int n)
{
	int save1 = 0;
	int save2 = 0;
	int contador = 0;

	n = n - 1;
	while (contador < n)
	{
		save1 = a[contador];
		save2 = a[n];
		a[n] = save1;
		a[contador] = save2;
		contador++;
		n--;
	}

}
