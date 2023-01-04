#include "main.h"
/**
 * number - loop
 * @n: number
 * @i: number to iterate
 * Return: 0
 */
int number(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (number(n, i + 1));
	}
	return (0);
}
/**
 * is_prime_number - check if prime or not
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (number(n, i));
}
