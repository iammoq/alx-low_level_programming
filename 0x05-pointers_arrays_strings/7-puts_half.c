#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int a = 0, i;

	while (a >= 0)
	{
		if (str[a] != '\0')
			break;
		a++;
	}

	if (a % 2 == 1)
	{
		i = a / 2;
	}
	else
	{
		i = (a - 1) / 2;
	}

	for (i = 0; i < a; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
