#include "main.h"
/**
 * _strncpy - function copies string
 *
 * @src : source
 * @dest : destination
 * @n : length
 * Return: dest
*/
char *_strncpy(char *src, char *dest, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (i = 0; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
