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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
