#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list.
 * @h: Pointer to listint_t.
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
