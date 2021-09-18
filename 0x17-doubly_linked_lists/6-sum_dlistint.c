#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all
 * the data (n) of a linked list.
 * @head: Pointer to listint_t.
 * Return: Sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
