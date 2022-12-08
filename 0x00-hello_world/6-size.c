#include <stdio.h>
/**
 * main- Print size of data types 
 * Return:0
*/
int main(void)
{
	char a;
	int n;
	long int l;
	long long int h;
	float j;

	prinf("Size of an Character: %lu byte(s)\n" (unsigned long)sizeof(a));
	prinf("Size of an Integer: %lu byte(s)\n" (unsigned long)sizeof(n));
	prinf("Size of an long Integer: %lu byte(s)\n" (unsigned long)sizeof(l));
	prinf("Size of an long long Integer: %lu byte(s)\n" (unsigned long)sizeof(h));
	printf("Size of a Float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
