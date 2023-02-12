#include "main.h"
/**
 * set_bit - sets the value of a bit
 * @n: unsigned long
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
