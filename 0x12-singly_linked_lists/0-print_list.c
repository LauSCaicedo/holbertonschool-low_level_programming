#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: pointer to list_t.
 * Return: Elements numbers.
 */

size_t print_list(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		len++;
	}
	return (len);
}
