#include "main.h"
/**
 * _atoi - function to convert string to integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0;
	unsigned int j = 0, k = 1, l = 1, i;

	while (*(s + count) !=	'\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			k *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				l *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		j = j + ((*(s + i) - 48)  * l);
		l /= 10;
	}
	return (j * k);
}
