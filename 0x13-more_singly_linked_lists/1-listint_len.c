#include "lists.h"

/**
 * listint_len - Function that returns the number
 * of elements in a linked listint_t list.
 * @h: Pointer to listint_t.
 * Return: Numbers of elements.
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
