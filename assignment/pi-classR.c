#define _USE_MATH_DEFINES // if include "math.h" need this line
#include <math.h>
#include <stdio.h>

double intgr_rect(double); // find the area of a quarter of a circle by rectangle
double intgr_trape(double); // find the area of a quarter of a circle by trapezoid


int main(void)
{
	FILE* output; // file pointer name
	double n = 0; // for divisions
	double pi_rect, pi_trape = 0; // pai_rectangle, pai_trapezoid

	for (int j = 0; j < 100; j++)
	{
		pi_rect = intgr_rect(n);
		pi_trape = intgr_trape(n);
	}

	pi_rect = intgr_rect(n);
	pi_trape = intgr_trape(n);

	return 0;
}


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