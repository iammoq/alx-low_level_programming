#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer
 * Return: 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_info;

	if (!head || !*head)
		return (0);

	head_info = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_info);
}
