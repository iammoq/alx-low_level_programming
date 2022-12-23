#include "main.h"
/**
 * times_table - prints times table to 9 from 0
 * Return:
 */
void times_table(void)
{
	int n, mult, pro;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pro = n *  mult;
			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');
			_putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
