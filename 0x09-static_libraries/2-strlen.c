#include "main.h"
#include <stdio.h>
/**
 * _strlen - counting length of string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
