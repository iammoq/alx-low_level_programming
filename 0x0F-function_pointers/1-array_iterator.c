#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - calls a function to act on array elements
 * @array: Name of the array
 * @size: size of the array
 * @action: the function that acts on the array
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
