#include "main.h"
/**
 * _puts - print string
 * @s: string
 * Return: 0
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
