#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: Start pointer pointed by another pointer of the same name.
 * @index: Is the index of the node.
 * Return: Always 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (head);
	}
	for (; head != NULL; x++)
	{
		if (x == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
