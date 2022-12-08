#include <stdio.h>
/**
 * main -Print size od data types
 * Return:0
*/
int main(void)
{
	int n;
	long int k;
	char b;
	double l;
	float p;

	prinf("Size of an Integer: %lu byte(s)\n" (unsigned long)sizeof(n));
	printf("Size of a Long Integer: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a Character: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a Double: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a Float: %lu byte(s)\n", (unsigned long)sizeof(p));
	return (0);
}

