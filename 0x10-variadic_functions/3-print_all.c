#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: shows format
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list a;
	unsigned int i = 0, j = 0, k = 0;
	char *str;
	const char tag[] = "cifs";

	va_start(a, format);
	while (format && format[i])
	{
		while (tag[j])
		{
			if (format[i] == tag[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(a, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(a, double)), k = 1;
				break;
			case 's':
				str = va_arg(a, char *), k = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
