#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

double intgr_rect(double n) // find the area of a quarter of a circle by rectangle
{
	double area = 0;
	for(int i = 1; i < n+1; i++)
	{
		double x = (i/n);
		area += ((1.0/n)*(sqrt(1.0-(x*x))));
	}

	return 4*area;
}

double intgr_trape(double n) // find the area of a quarter of a circle by trapezoid
{
	double area = 0;
	for (int i = 1; i < n+1; i++)
	{
		double y1, y2 = 0; // reset left point y1, right is y2
		double x = (i/n); // reset x coordinate
		y1 = sqrt(1.0-((x-(1.0/n))*(x-(1.0/n)))); // find left point y1
		y2 = sqrt(1.0-(x*x)); // find right point y2

		area += ((1.0/n) * (y1+y2) * (1.0/2.0));
	}
	return 4*area;
}

int main(void)
{
	double n = 0; // divisions
	double pai_rect, pai_trape = 0; // pai_rectangle, pai_trapezoid
	printf("分割回数を入力してください。\n->");	scanf("%lf", &n);

	pai_rect = intgr_rect(n);
	pai_trape = intgr_trape(n);


	printf("結果は\n短形：%lf 誤差：%lf\n台形：%lf 誤差：%lf\nです。", pai_rect, (pai_rect-M_PI), pai_trape, (pai_trape-M_PI));
	return 0;
}