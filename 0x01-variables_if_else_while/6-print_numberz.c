#include <stdio.h>
/**
 * main - print single digits of base 10 from 0
 * using putputchar without character variables
 * Return:0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');
	return (0);
}
