#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: number
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
