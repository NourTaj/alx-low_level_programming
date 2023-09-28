#include "lists.h"

/**
 *  get_nodeint_at_index - return node in index
 *  @head: points to the first node
 *  @index: index of a specific node
 *
 *  Return: points to the wanted node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
