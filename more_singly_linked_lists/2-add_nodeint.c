#include "lists.h"

/**
 *add_nodeint - add a node
 *@head: pointer to head
 *@n: an integer
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		if (*head)
			new->next = *head;
		else
			new->next = NULL;
		*head = new;
	}
	return (new);
}
