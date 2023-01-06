#include "main.h"
/**
 * _islower - checks if its lowwercase
 * @c: character entered
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 1 && c <= 25)
		return (1);
	else
		return (0);
}
