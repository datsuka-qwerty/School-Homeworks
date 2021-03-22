#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <math.h>
#include <stdio.h>

double intgr_rect(double); // find the area of a quarter of a circle by rectangle
double intgr_trape(double); // find the area of a quarter of a circle by trapezoid


int main(void)
{
	double n = 0; // for divisions
	double pi_rect, pi_trape = 0; // pai_rectangle, pai_trapezoid
	printf("分割回数を入力してください。\n->");	scanf("%lf", &n);

	pi_rect = intgr_rect(n);
	pi_trape = intgr_trape(n);

	printf("結果は\n短形：%.15f\n台形：%.15f\n", pi_rect, pi_trape);
	printf("数学関数で定義されているπ：%.15f\n", M_PI);
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