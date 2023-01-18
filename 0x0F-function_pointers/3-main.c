#include "3-calc.h"
#include <stdio.h>
/**
 * main - program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int ar1, ar2, results;
	char i;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	i = *argv[2];
	if ((i == '/' || i == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	results = func(ar1, ar2);
	printf("%d\n", results);

	return (0);
}
