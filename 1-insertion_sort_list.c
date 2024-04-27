#include "sort.h"

/**
* sw_n - Swaps two nodes in a doubly linked list
* @head: Pointer to the head of the list
* @node__on__e: Pointer to the first node to be swapped
* @node__tw__o: Pointer to the second node to be swapped
*/
void sw_n(listint_t **head, listint_t **node__on__e, listint_t *node__tw__o)
{
	(*node__on__e)->next = node__tw__o->next;
	if (node__tw__o->next != NULL)
		node__tw__o->next->prev = *node__on__e;
	node__tw__o->prev = (*node__on__e)->prev;
	node__tw__o->next = *node__on__e;
	if ((*node__on__e)->prev != NULL)
		(*node__on__e)->prev->next = node__tw__o;
	else
		*head = node__tw__o;
	(*node__on__e)->prev = node__tw__o;
	*node__on__e = node__tw__o->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the insertion sort algorithm
 * @list: Double pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr__ent, *inse__rti__ion, *tem__p;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr__ent = (*list)->next;

	while (curr__ent != NULL)
	{
		tem__p = curr__ent->next;

		inse__rti__ion = curr__ent->prev;

		while (inse__rti__ion != NULL && curr__ent->n < inse__rti__ion->n)
		{
			sw_n(list, &inse__rti__ion, curr__ent);
			print_list((const listint_t *)*list);
		}
		curr__ent = tem__p;
	}
}
