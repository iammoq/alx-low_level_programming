#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes character c
 * @c: character
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
