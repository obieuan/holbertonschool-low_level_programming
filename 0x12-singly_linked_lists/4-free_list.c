#include "lists.h"
/**
 * *free_list - libera una lista
 *
 *@head: head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp->str);
		free(temp);
		head = NULL;
	}
}
