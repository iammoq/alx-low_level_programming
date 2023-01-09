#include "main.h"
#include <stdlib.h>
/**
 * argstostr - prints args
 * @ac: width of grid
 * @av: heigth of grid
 * Return: args
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (a < ac)
	{
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	s = malloc(sizeof(char) * count);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	return (s);
}
