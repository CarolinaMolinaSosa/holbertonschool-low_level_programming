#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new = malloc(sizeof(dlistint_t)), *p;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	p = *h;
	for (i = 0; i < idx; i++)
	{
		if (i != idx - 1)
		{
			if (p->next)
				p = p->next;
			else
				return (NULL);
		}
	}
	if (p->next == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	new->next = p->next;
	p->next = new;
	p = p->next;
	p = p->next;
	new->next = p;
	return (new);
}
