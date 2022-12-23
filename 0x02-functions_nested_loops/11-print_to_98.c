#include "main.h"
/**
 * print_to_98 - print all natural numbers from input to 98
 *	separated by comma and then space
 * @num: number entered
 * Return:
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}
	else
	{
		while (num < 98)
			printf"%d, ", num++);
		printf("%d\n", num);
	}
}
