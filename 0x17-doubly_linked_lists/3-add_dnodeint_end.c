#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a list.
 * @head: Start pointer pointed by another pointer of the same name
 * @n: Value of a list item.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn, *aux = NULL;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = NULL;
	aux = *head;
	if (*head == NULL)
	{
		*head = newn;
	}
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newn;
	}
	newn->prev = aux;
	return (newn);
}
