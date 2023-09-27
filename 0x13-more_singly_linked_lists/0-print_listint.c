#include "lists.h"

/**
 * print_listint - prints all elements in a linled list
 * @h: points to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numofnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numofnodes++;
	}
	return (numofnodes);
}
