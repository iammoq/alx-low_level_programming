#include "main.h"
/**
 * _puts - puts a string followed by a new line
 * @str: pointer value
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
