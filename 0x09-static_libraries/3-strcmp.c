#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int counter, comp;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	comp = s1[counter] - s2[counter];
	return (comp);
}
