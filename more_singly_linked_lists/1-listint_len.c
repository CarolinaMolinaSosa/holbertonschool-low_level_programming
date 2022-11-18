#include "lists.h"

/**
 * listint_len - count and list the number of elements in a linked list
 * @h: pointer
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		res++;
		h = h->next;
	}
	return (res);
}
