#include "main.h"
/**
 * factorial - print factorial of number given
 * @n: number given
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
