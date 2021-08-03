#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list.
 * @head: Start pointer pointed by another pointer of the same name.
 * @n: Value of a list item.
 * Return: Pointer to new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
