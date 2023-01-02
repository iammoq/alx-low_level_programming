#include "main.h"
/**
 * print_diagsums - print sum of 2 diagonals
 * @a: pointer to start
 * @size: size or width
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}

	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);
}
