#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (month > 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
	{
		if (day >= 60)
		{
			printf("Day of the year: %d\n", day + 1);
			printf("Remaining days: %d\n", 366 - (day + 1));
			return;
		}
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
}
