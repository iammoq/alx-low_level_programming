#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: memory pointer
 * @b: constant
 * @n: number of bytes
 * Return: pointer memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
