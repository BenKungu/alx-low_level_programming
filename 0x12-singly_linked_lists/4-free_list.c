#include "lists.h"

/**
 * free_list - free a lst_t list
 * @head: head of a linkd list
 * Return: vod
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
