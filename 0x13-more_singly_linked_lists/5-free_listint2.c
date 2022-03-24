#include "lists.h"
/**
 * free_listint2 - libera espacio de una lista
 * @head: inicio de la lista
 * Return: nada.
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	while (head && (*head))
	{
		a = (*head)->next;
		free((*head));
		(*head) = a;
	}
}
