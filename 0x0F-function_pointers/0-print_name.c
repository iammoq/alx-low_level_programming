#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function thats prints a name passed to it
 * @name: char to display
 * @f: A pointer function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
