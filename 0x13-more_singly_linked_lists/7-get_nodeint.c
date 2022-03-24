#include "lists.h"
/**
 * get_nodeint_at_index - retorna en nodo N de una lista
 * @head: header o primer elemento de lista
 * @index: direccion del nodo
 * Return: nodo
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	while (x < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
