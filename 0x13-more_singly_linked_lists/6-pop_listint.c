#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list.
 * @head: Pointer double to listint_t.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = tmp->next;
		x = tmp->n;
		free(tmp);
	}
	return (x);
}
