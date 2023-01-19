#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: pointer string
 * @n: num
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list a;

	va_start(a, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
