#include "main.h"
/**
 * sqrt - finds square root of two numbers
 * @a: first number
 * @b: second number
 * Return: Squareroot
 */
int sqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	else
		return (sqrt(a, b + 1));
	return (1);
}
/**
 * _sqrt_recursion - print square root of number
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt(n, 1));
}
