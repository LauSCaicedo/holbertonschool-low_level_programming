#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to listint_t.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		head = head->next;
		tmp = head;
	}
	free(tmp);
}
