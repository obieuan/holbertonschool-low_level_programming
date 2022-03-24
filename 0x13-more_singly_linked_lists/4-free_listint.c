#include "lists.h"
/**
 * free_listint -libera el espacio de una lista
 * @head: encabezado
 */
void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
