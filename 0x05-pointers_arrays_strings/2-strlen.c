#include "main.h"
/**
 * _strlen - function to print legth of string
 * @s: string entered
 * Return: 0
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
