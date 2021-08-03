#include "lists.h"

/**
 * add_nodeint - Function that adds a new node
 * at the beginning of a listint_t list.
 * @head: Start pointer pointed by another pointer of the same name.
 * @n: Value of a list item.
 * Return: Pointer to new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
