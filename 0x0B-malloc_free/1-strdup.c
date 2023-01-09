#include "main.h"
/**
 * _strdup - function returns a pointer to a new string which
 * is a duplicate of the string str. Memory for the new string
 * is obtained with malloc, and can be freed with free
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int i, l = 0;

	if (str == 0)
		return (NULL);

	while (str[l] != '\0')
		l++;

	p = (char *) malloc((sizeof(char) * l) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = str[i];
	p[l] = '\0';
	return (p);
}
