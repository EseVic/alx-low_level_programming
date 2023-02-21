#include "main.h"

/**
* print_remaining_days - picks a date
* and print how many is left
* @month: month in number format
* @day: day of the month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
{
if (month >= 3 && days >= 60)
{
day++;
}
printf("day of the year: %d\n", day);
printf("Remaining days %d\n", 366 - day);
}
else
[
if (month == 2 && day == 60)
{
printf("day of the year: %d\n", 365 - day)
}
}
