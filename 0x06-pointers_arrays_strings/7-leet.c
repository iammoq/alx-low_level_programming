#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string into 1337
 * @m : string
 * Return: m
*/
char *leet(char *m)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == m[i])
				m[i] = b[j];
		}
	}
	return (m);
}
