#include "lists.h"
/**
 * add_nodeint - inserta nuevo nodo al inicio de la lista
 * @head: encabezado
 * @n: numero
 * Return: direccion del nuevo elemento
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t *));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
