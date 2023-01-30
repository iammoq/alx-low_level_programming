#incude "lists.h"
/**
 * insert_nodeint_at_index - This function inserts a new node
 * @head: pointer
 * @idx: The index of the list
 * @n: The integer
 * Return: pointer to new mode or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i = 0;
	listint_t *node, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head && !idx)
	{
		*head = node;
		return (node);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
