#include "lists.h"

/**
 * list_len - returns the number of elemets in a linked list_t lst
 * @h: head of linkd list
 * Return: nmber of elemet
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
