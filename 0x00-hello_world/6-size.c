#include <stdio.h>
/**
 * main - print data types size
 * Return:0
*/
int main(void)
{
	char a;
	int n;
	long int l;
	long long int h;
	float j;

	printf("Size of a Character: %lu byte(s)\n" (unsigned long)sizeof(a));
	printf("Size of an Integer: %lu byte(s)\n" (unsigned long)sizeof(n));
	printf("Size of a long Integer: %lu byte(s)\n" (unsigned long)sizeof(l));
	printf("Size of a long long Integer: %lu byte(s)\n" (unsigned long)sizeof(h));
	printf("Size of a Float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
