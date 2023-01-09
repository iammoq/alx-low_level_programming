#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - return a pointer that points to a newly allocated space
 * @s1: first array
 * @s2: second array
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;

	dest = (char *) malloc((len1 + len2) * sizeof(*s1));
	if (dest == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dest + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}

	return (dest);
}
