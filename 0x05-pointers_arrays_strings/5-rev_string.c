#include "main.h"
/**
 * rev_string - a function that reverses string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int a, i, b;
	char c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	for (i = 0; b >= 0 && i < b; b--, i++)
	{
		c = s[i];
		s[i] = s[b];
		s[b] = c;
	}
}
