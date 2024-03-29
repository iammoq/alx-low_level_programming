#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: singly linked list
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
