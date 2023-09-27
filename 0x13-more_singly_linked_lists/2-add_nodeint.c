#include "lists.h"

/**
 * add_nodeint - to add a new node in the the beginning of the linked list
 * @head: pointer to the first node of the list
 * @n: value to insert in that new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);
	newnode->next = NULL;
	newnode->n = n;
	if (*head)
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}
