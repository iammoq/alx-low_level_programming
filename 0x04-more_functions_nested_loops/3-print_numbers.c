#include "main.h"
/**
 * print_numbers - print numbers from zero to nine
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}