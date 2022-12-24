#include "main.h"
#include <stdio.h>
/**
 * print_remaining_days - accepts date displays number
 *	of days left in that year
 * @mon: month of the year
 * @day: day
 * @year: year
 * Return: void
 */
void print_remaining_days(int mon, int day, int year)
{
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
	{
		if (mon > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (mon == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", mon, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
}
