/*
	Before run this program, make result.csv file current directory
	write format [division, intgr_rect, division, intgr_trape]
*/
#define _USE_MATH_DEFINES // if include "math.h" need this line
#include <math.h>
#include <stdio.h>
#include <stdlib.h>  // use system()

double intgr_rect(double); // find the area of a quarter of a circle by rectangle
double intgr_trape(double); // find the area of a quarter of a circle by trapezoid


int main(void)
{
	FILE* fp; // file pointer name
	double pi_rect, pi_trape = 0; // pai_rectangle, pai_trapezoid
	char chr = '\0';


/* make and reset */
	printf("Do you want make or reset result.csv? (y/n)\n");	scanf("%s", &chr);
	if ((chr == 'Y') || (chr == 'y'))
	{
		fp = fopen("result.csv", "w"); // clear and reset result.csv file
		if (fp == NULL)
		{
			printf("Error!!\n");
			return 1;
		}
		fprintf(fp, "divisions,rectangle,divisions,trapezoid\n");
		fclose(fp);
		printf("Successfully reset!\nSuccess writing divisions, rectangle, divisions, trapezoid\n");
	}


/* calculate and write*/
	printf("Check out result.csv file\n");
	system("pause>nul|set/p =Ready?");

	fp = fopen("result.csv", "a");

	if (fp != NULL) // successfully file open in mode a
	{
		for (int j = 1; j < 101; j++) // write to file
		{
			pi_rect = intgr_rect(j);
			pi_trape = intgr_trape(j);
			fprintf(fp, "%d,%.15f,%d,%.15f\n", j, pi_rect, j, pi_trape);
			printf("%d time(s), %.15f, %.15f\n", j, pi_rect, pi_trape);
		}
	}
	else // unsuccessfully file open
	{
		printf("Unable file open!!\n");
		system("PAUSE"); // Press any key to continue . . .
		return 1;
	}

	fclose(fp);

	return 0;
}


/* calculate */
double intgr_rect(double n) // find the area of a quarter of a circle by "rectangle"
{
	double area = 0;
	for(int i = 1; i < n+1.0; i++)
	{
		double x = (i/n);
		area += ((1.0/n)*(sqrt(1.0-(x*x))));
	}

	return 4.0*area;
}

double intgr_trape(double n) // find the area of a quarter of a circle by "trapezoid"
{
	double area = 0;
	for (int i = 1; i < n+1.0; i++)
	{
		double y1, y2 = 0; // reset left point y1, right y2
		double x = (i/n); // reset x coordinate
		y1 = sqrt(1.0 - ( (x-(1.0/n)) * (x-(1.0/n)) )); // find left point y1
		y2 = sqrt(1.0 - (x*x)); // find right point y2

		area += ((1.0/n) * (y1+y2) * (1.0/2.0));
	}
	return 4.0*area;
}