#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function of
 * @a: first number
 * @b: second number
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
