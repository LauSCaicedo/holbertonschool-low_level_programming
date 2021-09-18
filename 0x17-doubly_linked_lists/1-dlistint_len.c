#include "lists.h"

/**
 * dlistint_len - function that returns the
 * number of elements in a linked list.
 * @h: Pointer to listint_t.
 * Return: Numbers of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
