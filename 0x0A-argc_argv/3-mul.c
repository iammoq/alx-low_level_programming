#include <stdio.h>
#include "main.h"
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 *  @argv: argument
 *  Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	diff = i * j;

	printf("%i\n", diff);
	return (0);
}
