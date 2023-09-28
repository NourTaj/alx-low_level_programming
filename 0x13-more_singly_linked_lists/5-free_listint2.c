#include "lists.h"

/**
 * free_listint2 - sets head to Null
 * @head: points to the first node
 *
 * Return void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		*head = temp;
		free(*head);
	}
	*head = NULL;
}
