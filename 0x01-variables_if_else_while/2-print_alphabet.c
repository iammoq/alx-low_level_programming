#include <stdio.h>
/**
 * main - print alphabet in lowwer case
 * Return:0
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z', l++)
		putchar(l);

	putchar("\n");
	return (0);
}
