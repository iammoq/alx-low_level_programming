#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: string
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		pos = 0;
		while (pos < size)
		{
			*(buffer + pos) = c;
			pos++;
		}
		return (buffer);
	}
}
