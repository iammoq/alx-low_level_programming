#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string pointed to src and dest
 * @dest: destination
 * @src: source
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}