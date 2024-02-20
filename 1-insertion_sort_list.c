#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - Sorts a doubly linked list by the insertion method.
 * @list: the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tempNode, *key, *holder;

	if (list == NULL)
		return;
	if (*list == NULL)
		return;
	if ((*list)->next)
		key = (*list)->next;
	while (key != NULL)
	{
		tempNode = key->prev;
		holder = tempNode;

		while (tempNode->next != NULL && tempNode->n > key->n)
		{
			tempNode->next = key->next;
			key->prev = tempNode->prev;
			if (tempNode->prev)
				tempNode->prev->next = key;
			if (key->next)
				key->next->prev = tempNode;
			key->next = tempNode;
			tempNode->prev = key;

			if (key->prev)
				tempNode = key->prev;
			else
			{
				(*list) = key;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		if (key->n < holder->n)
			key = holder->next;
		else if (holder->next)
			key = holder->next->next;
		else
			key = holder->next;
	}
}
