#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: head of the linked list
 * @str: string
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t a = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[a])
		a++;

	newNode->str = strdup(str);
	newNode->len = a;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}

