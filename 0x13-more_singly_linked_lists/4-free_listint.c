#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to listint_t.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (tmp != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
