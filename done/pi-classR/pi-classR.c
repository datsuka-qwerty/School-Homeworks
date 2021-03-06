#define _USE_MATH_DEFINES // if include "math.h" need this line
#define SYSPAUSE system("pause>nul|set/p =Press ENTER to continue..."); // <-Windows User
// #define SYSPAUSE system("echo Press ENTER to continue...; read dummy;"); // <-Linux or MacOS User
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
			printf("Unable file open!!\n");
			SYSPAUSE;
		}
		printf("Successfully reset!\n");
		fprintf(fp, "divisions,rectangle,divisions,trapezoid\n");
		fclose(fp);
		printf("Success writing divisions, rectangle, divisions, trapezoid.\n\n");
	}


/* calculate and write*/
	printf("Check out result.csv file. Ready writing to file?\n");
	SYSPAUSE;

	fp = fopen("result.csv", "a");

	if (fp != NULL) // if successfully open file in mode a
	{
		for (int j = 1; j < 101; j++) // write to file
		{
			pi_rect = intgr_rect(j);
			pi_trape = intgr_trape(j);
			fprintf(fp, "%d,%.15f,%d,%.15f\n", j, pi_rect, j, pi_trape);
			printf("%d time(s), %.15f, %.15f\n", j, pi_rect, pi_trape);
		}
	}
	else // unsuccessfully open file
	{
		printf("Unable file open!!\n");
		SYSPAUSE;
		return -1;
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