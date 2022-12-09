#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 * Return:0
*/
int main(void)
{
	int a;
	char w;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0')

	for (w = 'a'; w <= 'f'; w++)
		putchar(w);

	putchar('\n');
	return (0);
}
