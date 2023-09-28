#include "lists.h"

/**
 * sum_listint - sum of the elements in a list
 * @head:ponts to the first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h = head;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
