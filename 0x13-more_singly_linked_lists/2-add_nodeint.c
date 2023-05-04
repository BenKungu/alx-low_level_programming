#include "lists.h"

/**
 * add_nodeint - add a new node at the begining of a litint_t list
 * @head: head of liked list
 * @n: intger
 * Return: addres of the new elemnt or NUL if it fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
