#include "lists.h"
/**
 * add_nodeint_end - inserta un nuevo nodo al final de la lista
 * @head: encabezado
 * @n: dato
 * Return: direccion del nuevo elemento o NULL si falla
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo;
	listint_t *aux;

	nuevo = malloc(sizeof(listint_t *));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->next = NULL;

	if (*head == NULL)
		*head = nuevo;
	else
	{
		aux = (*head);
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = nuevo;
	}
	return (nuevo);
}
