#include "lists.h"

/**
 * listint_len - return the number of element in a linkd list
 * @h: head of a linkd list
 * Return: nuber of element in lined lit
 */

size_t listint_len(const listint_t *h)
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
