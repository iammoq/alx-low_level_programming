#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: pointer
 * @n: num
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
