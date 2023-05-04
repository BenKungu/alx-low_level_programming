#include "lists.h"

/**
 * print_litint - print all elemnts of a listnt_t list
 * @h: head of linked lis
 * Return: nuber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
