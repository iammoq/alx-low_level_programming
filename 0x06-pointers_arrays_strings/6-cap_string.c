#include "main.h"
/**
 * cap_string - capitalises all words
 * @m : string
 * Return: m
*/
char *cap_string(char *m)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(m + i))
	{
		if (*(m + i) >= 'a' && *(m + i) <= 'z')
		{
			if (i == 0)
				*(m + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(m + i - 1))
						*(m + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (m);
}
