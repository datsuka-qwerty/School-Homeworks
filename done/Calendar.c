/*
	Program: Assignments-Calendar
	Written by:
*/
#include <stdio.h>

#define DECISION (((365*(in_year-1) + month[in_month-1] + 1) + leap_year) % 7) // decision start day
#define LEAP(in_year) (in_year % 4 == 0 && in_year % 100 != 0) || in_year % 400 == 0 // leap year
#define MONTH (in_month == 1) || (in_month == 3) || (in_month == 5) || (in_month == 7) || (in_month == 8) || (in_month == 10) || (in_month == 12) // decision short month

int main(void)
{
	int month[12] = {0, 31, 59, 90, 120, 151, 181, 212, 245, 273, 304, 334}; // data for decision weekday
	int in_year, in_month = 0; // variables for input year and month
	int leap_year = 0; // count leap years

	printf("Enter year in CE\n->");	scanf("%d", &in_year); // data input
	printf("\nEnter month \n->");	scanf("%d", &in_month);

	for (int i = 1; i <= in_year-1; i++) // count leap years until in_year
	{
		if (LEAP(i))
		{
			leap_year++;
		}
	}

	switch (DECISION) // using Switch to differentiate cases
	{
		case 0: // start on sunday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("  1		  2		  3		  4		  5		  6		  7\n");
				printf("  8		  9		 10		 11		 12		 13		 14\n");
				printf(" 15		 16		 17		 18		 19		 20		 21\n");
				printf(" 22		 23		 24		 25		 26		 27		 28\n");
				printf(" 29		 30		 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap year
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("  1		  2		  3		  4		  5		  6		  7\n");
					printf("  8		  9		 10		 11		 12		 13		 14\n");
					printf(" 15		 16		 17		 18		 19		 20		 21\n");
					printf(" 22		 23		 24		 25		 26		 27		 28\n");
					printf(" 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("  1		  2		  3		  4		  5		  6		  7\n");
				printf("  8		  9		 10		 11		 12		 13		 14\n");
				printf(" 15		 16		 17		 18		 19		 20		 21\n");
				printf(" 22		 23		 24		 25		 26		 27		 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("  1		  2		  3		  4		  5		  6		  7\n");
				printf("  8		  9		 10		 11		 12		 13		 14\n");
				printf(" 15		 16		 17		 18		 19		 20		 21\n");
				printf(" 22		 23		 24		 25		 26		 27		 28\n");
				printf(" 29		 30\n");

			}
			break;

		case 1: // start on monday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("  		  1		  2		  3		  4		  5		  6\n");
				printf("  7		  8		  9		 10		 11		 12		 13\n");
				printf(" 14		 15		 16		 17		 18		 19		 20\n");
				printf(" 21		 22		 23		 24		 25		 26		 27\n");
				printf(" 28		 29		 30		 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap year
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("  		  1		  2		  3		  4		  5		  6\n");
					printf("  7		  8		  9		 10		 11		 12		 13\n");
					printf(" 14		 15		 16		 17		 18		 19		 20\n");
					printf(" 21		 22		 23		 24		 25		 26		 27\n");
					printf(" 28		 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("  		  1		  2		  3		  4		  5		  6\n");
				printf("  7		  8		  9		 10		 11		 12		 13\n");
				printf(" 14		 15		 16		 17		 18		 19		 20\n");
				printf(" 21		 22		 23		 24		 25		 26		 27\n");
				printf(" 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("  		  1		  2		  3		  4		  5		  6\n");
				printf("  7		  8		  9		 10		 11		 12		 13\n");
				printf(" 14		 15		 16		 17		 18		 19		 20\n");
				printf(" 21		 22		 23		 24		 25		 26		 27\n");
				printf(" 28		 29		 30\n");
			}
			break;

		case 2: // start on tuesday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		  1		  2		  3		  4		  5\n");
				printf("  6		  7		  8		  9		 10		 11		 12\n");
				printf(" 13		 14		 15		 16		 17		 18		 19\n");
				printf(" 20		 21		 22		 23		 24		 25		 26\n");
				printf(" 27		 28		 29		 30		 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap year
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("   		   		  1		  2		  3		  4		  5\n");
					printf("  6		  7		  8		  9		 10		 11		 12\n");
					printf(" 13		 14		 15		 16		 17		 18		 19\n");
					printf(" 20		 21		 22		 23		 24		 25		 26\n");
					printf(" 27		 28		 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		  1		  2		  3		  4		  5\n");
				printf("  6		  7		  8		  9		 10		 11		 12\n");
				printf(" 13		 14		 15		 16		 17		 18		 19\n");
				printf(" 20		 21		 22		 23		 24		 25		 26\n");
				printf(" 27		 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		  1		  2		  3		  4		  5\n");
				printf("  6		  7		  8		  9		 10		 11		 12\n");
				printf(" 13		 14		 15		 16		 17		 18		 19\n");
				printf(" 20		 21		 22		 23		 24		 25		 26\n");
				printf(" 27		 28		 29		 30\n");
			}
			break;

		case 3: // start on wednesday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		  1		  2		  3		  4\n");
				printf("  5		  6		  7		  8		  9		 10		 11\n");
				printf(" 12		 13		 14		 15		 16		 17		 18\n");
				printf(" 19		 20		 21		 22		 23		 24		 25\n");
				printf(" 26		 27		 28		 29		 30		 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap yaer
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("   		   		   		  1		  2		  3		  4\n");
					printf("  5		  6		  7		  8		  9		 10		 11\n");
					printf(" 12		 13		 14		 15		 16		 17		 18\n");
					printf(" 19		 20		 21		 22		 23		 24		 25\n");
					printf(" 26		 27		 28		 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		  1		  2		  3		  4\n");
				printf("  5		  6		  7		  8		  9		 10		 11\n");
				printf(" 12		 13		 14		 15		 16		 17		 18\n");
				printf(" 19		 20		 21		 22		 23		 24		 25\n");
				printf(" 26		 27		 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		  1		  2		  3		  4\n");
				printf("  5		  6		  7		  8		  9		 10		 11\n");
				printf(" 12		 13		 14		 15		 16		 17		 18\n");
				printf(" 19		 20		 21		 22		 23		 24		 25\n");
				printf(" 26		 27		 28		 29		 30\n");
			}
			break;

		case 4: // start on thursday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		  1		  2		  3\n");
				printf("  4		  5		  6		  7		  8		  9		 10\n");
				printf(" 11		 12		 13		 14		 15		 16		 17\n");
				printf(" 18		 19		 20		 21		 22		 23		 24\n");
				printf(" 25		 26		 27		 28		 29		 30		 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap year
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("   		   		   		   		  1		  2		  3\n");
					printf("  4		  5		  6		  7		  8		  9		 10\n");
					printf(" 11		 12		 13		 14		 15		 16		 17\n");
					printf(" 18		 19		 20		 21		 22		 23		 24\n");
					printf(" 25		 26		 27		 28		 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		  1		  2		  3\n");
				printf("  4		  5		  6		  7		  8		  9		 10\n");
				printf(" 11		 12		 13		 14		 15		 16		 17\n");
				printf(" 18		 19		 20		 21		 22		 23		 24\n");
				printf(" 25		 26		 27		 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		  1		  2		  3\n");
				printf("  4		  5		  6		  7		  8		  9		 10\n");
				printf(" 11		 12		 13		 14		 15		 16		 17\n");
				printf(" 18		 19		 20		 21		 22		 23		 24\n");
				printf(" 25		 26		 27		 28		 29		 30\n");
			}
			break;

		case 5: // start on friday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		   		  1		  2\n");
				printf("  3		  4		  5		  6		  7		  8		  9\n");
				printf(" 10		 11		 12		 13		 14		 15		 16\n");
				printf(" 17		 18		 19		 20		 21		 22		 23\n");
				printf(" 24		 25		 26		 27		 28		 29		 30\n");
				printf(" 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap year
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("   		   		   		   		   		  1		  2\n");
					printf("  3		  4		  5		  6		  7		  8		  9\n");
					printf(" 10		 11		 12		 13		 14		 15		 16\n");
					printf(" 17		 18		 19		 20		 21		 22		 23\n");
					printf(" 24		 25		 26		 27		 28		 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		   		  1		  2\n");
				printf("  3		  4		  5		  6		  7		  8		  9\n");
				printf(" 10		 11		 12		 13		 14		 15		 16\n");
				printf(" 17		 18		 19		 20		 21		 22		 23\n");
				printf(" 24		 25		 26		 27		 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		   		  1		  2\n");
				printf("  3		  4		  5		  6		  7		  8		  9\n");
				printf(" 10		 11		 12		 13		 14		 15		 16\n");
				printf(" 17		 18		 19		 20		 21		 22		 23\n");
				printf(" 24		 25		 26		 27		 28		 29		 30\n");
			}
			break;

		case 6: // start on saturday
			if (MONTH)
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		   		   		  1\n");
				printf("  2		  3		  4		  5		  6		  7		  8\n");
				printf("  9		 10		 11		 12		 13		 14		 15\n");
				printf(" 16		 17		 18		 19		 20		 21		 22\n");
				printf(" 23		 24		 25		 26		 27		 28		 29\n");
				printf(" 30		 31\n");
			}
			else if (in_month == 2)
			{
				if (LEAP(in_year)) // leap year
				{
					printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
					printf("===================================================\n");
					printf("   		   		   		   		   		   		  1\n");
					printf("  2		  3		  4		  5		  6		  7		  8\n");
					printf("  9		 10		 11		 12		 13		 14		 15\n");
					printf(" 16		 17		 18		 19		 20		 21		 22\n");
					printf(" 23		 24		 25		 26		 27		 28		 29\n");
					return 0;
				}
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		   		   		  1\n");
				printf("  2		  3		  4		  5		  6		  7		  8\n");
				printf("  9		 10		 11		 12		 13		 14		 15\n");
				printf(" 16		 17		 18		 19		 20		 21		 22\n");
				printf(" 23		 24		 25		 26		 27		 28\n");
			}
			else
			{
				printf("Sun		Mon		Tue		Wed		Thu		Fri		Sat\n");
				printf("===================================================\n");
				printf("   		   		   		   		   		   		  1\n");
				printf("  2		  3		  4		  5		  6		  7		  8\n");
				printf("  9		 10		 11		 12		 13		 14		 15\n");
				printf(" 16		 17		 18		 19		 20		 21		 22\n");
				printf(" 23		 24		 25		 26		 27		 28		 29\n");
				printf(" 30\n");
			}
	}


	return 0;
}