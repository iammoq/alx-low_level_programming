#include <unistd.h>
/**
 * _putchar - writes the character c
 * @c: The character
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
