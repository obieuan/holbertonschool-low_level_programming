#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - imprime el nombre de un usuario
 * @name: name
 * @f: imprime el nombre
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
