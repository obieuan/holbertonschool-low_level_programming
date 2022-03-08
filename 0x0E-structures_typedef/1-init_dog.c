#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Esta funcion recibe datos para inicializar una struct
 * @name: pet name
 * @age: pet age
 * @owner: pet owner name
 * @d: struct
 * Return: Null si d esta vacio
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
