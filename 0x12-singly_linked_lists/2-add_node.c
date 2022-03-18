#include "lists.h"
/**
 * *add_node - pone un nodo al inicio de la lista
 *
 *@head: puntero a puntero del head de la lista
 *@str: pointer
 *
 * Return: direccion del nuevo elemento, NULL si falla
 */

list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *newhead = NULL;
	int i = 0;
	int contador = 0;

	if (!nstr)
		return (NULL);
	for (i = 0; nstr[i] != '\0'; i++)
	{
		contador++;
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(nstr);
		return (NULL);
	}
	newhead->str = nstr;
	newhead->len = contador;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
