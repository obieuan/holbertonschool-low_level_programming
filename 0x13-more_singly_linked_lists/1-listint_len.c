#include "lists.h"

/**
 * listint_len - numero de elementos en una linked list
 * @h: puntos
 * Return: nodos
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
