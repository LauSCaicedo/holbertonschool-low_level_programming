#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of a list.
 * @head: Start pointer pointed by another pointer of the same name.
 * @n: Value of a list item.
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
	{
		return (NULL);
	}
	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;
	*head = newn;
	return (newn);
}
