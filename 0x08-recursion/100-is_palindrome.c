#include "main.h"
/**
 * checker - checks string
 * @s: string
 * @len: length
 * @i: incrementor
 * Return: 0
 */
int checker(int *s, int len, int i)
{
	if (s[len] == s[i])
		if (len > i / 2)
			return (1);
		else
			return (checker(s, len + 1, i - 1));
	else
		return (0);
}
/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (checker(s, _strlen_recursion(s) - 1, 0));
}
