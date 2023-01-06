#include "main.h"
#define NULL 0
/**
 * _strchr - locate first occurance of a string
 * @s: string
 * @c: character
 * Return: Character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
