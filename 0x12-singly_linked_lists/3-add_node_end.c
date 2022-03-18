#include "lists.h"
/**
 * *add_node - pone un nodo al final  de la lista
 *
 *@head: puntero a puntero del head de la lista
 *@str: pointer
 *
 * Return: direccion del nuevo elemento, NULL si falla
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *last = *head;
	list_t *new_node = NULL;
	int i = 0;
	int contador = 0;

	if (!nstr)
		return (NULL);
	for (i = 0; nstr[i] != '\0'; i++)
	{
		contador++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(nstr);
		return (NULL);
	}
	new_node->str = nstr;
	new_node->len = contador;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
