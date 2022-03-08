#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Esta funcion recibe datos para imprimir una struct
 * @d: struct
 * Return: Null si d esta vacio
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
