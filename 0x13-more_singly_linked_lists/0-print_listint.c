#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer
 * Return: nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
