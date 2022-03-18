#include "lists.h"
/**
 * print_list - imprime toda la lista
 *@h: head
 * Return: numero de nodos
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	int contador = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		contador++;
		h = h->next;
	}
	return (i);
}
