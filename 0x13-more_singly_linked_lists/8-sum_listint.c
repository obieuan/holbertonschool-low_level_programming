#include "lists.h"
/**
 * sum_listint -suma de todos los elmentos de lista
 * @head: header o primer elemento
 * Return: suma
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		suma = suma + head->n;
		head = head->next;
	}
	return (suma);
}
