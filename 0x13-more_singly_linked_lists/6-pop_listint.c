#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x = 0;

	if (*head == NULL)
		return (0);
	else
	{
		tmp = *head;
		*head = tmp->next;
		x = tmp->n;
		free(tmp);
	}
	return (x);
}
