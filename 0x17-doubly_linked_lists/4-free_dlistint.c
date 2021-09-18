#include "lists.h"

/**
 * free_dlistint - function that frees a listint_t list.
 * @head: Pointer to listint_t.
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
