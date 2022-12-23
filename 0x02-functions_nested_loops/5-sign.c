#include "main.h"
/**
 * print_sign - print sign of number
 * @num : number to be printed
 * Return: 1 or 0 or -1
*/
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
