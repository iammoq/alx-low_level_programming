#include <stdio.h>
/**
 * main - print sum of even valued fibonacci series
 *	not exceding 4000000
 *Return: 0
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	float totalSum;

	while (1)
	{
		sum = fibo1 + fibo2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			totalSum += sum;

		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%.0F\n", totalSum);
	return (0);
}
