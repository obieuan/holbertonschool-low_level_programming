#include "lists.h"
/**
 * list_len - retorna el numero de elementos
 *
 *@h: head de la lista
 *
 * Return: numero de elementos
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
