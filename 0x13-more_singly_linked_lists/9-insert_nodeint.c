#include "lists.h"

/**
 * insert_nodeint_at_index - inserts in a list
 * @head: points to the first node
 * @idx: index of new node
 * @n: elements of new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *h = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; h && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = h->next;
			h->next = newnode;
			return (newnode);
		}
		else
			h = h->next;
	}
	return (NULL);
}
