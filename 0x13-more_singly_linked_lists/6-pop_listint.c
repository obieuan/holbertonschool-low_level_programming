#include "lists.h"
/**
 * pop_listint -borra el nodo principal de una lista
 * @head: header primer elemento
 * Return: contenido de head
 */
int pop_listint(listint_t **head)
{
	listint_t *borrar;
	int n;

	if ((*head) == NULL)
		return (0);
	borrar = (*head);
	n = borrar->n;
	(*head) = borrar->next;
	free(borrar);

	return (n);
}
