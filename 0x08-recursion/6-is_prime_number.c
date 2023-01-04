#include "main.h"
/**
 * number - loop
 * @num: number
 * @i: number to iterate
 * Return: 0
 */
int number(int num, int i)
{
	if (i == num - 1)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	if (num % i != 0)
	{
		return (number(num, i + 1));
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
	return (number(num, i));
}
