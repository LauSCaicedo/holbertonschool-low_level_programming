#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Double pointer to listint_t.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
