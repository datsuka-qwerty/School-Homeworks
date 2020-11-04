#include <stdio.h>
#include <math.h>

void calc(double a, double b, double c, double* a1, double* a2) // This function is calculate Solution Formula. Retrun is a1 and a2
{
	*a1 = ((-b) + sqrt((b*b)-4*a*c)) / (2 * a);
	*a2 = ((-b) - sqrt((b*b)-4*a*c)) / (2 * a);
}

int main(void)
{
	double a, b, c, ans1, ans2 = 0;
	printf("ax^2+bx+c=0の形式で入力してください\n");
	printf("a->");	scanf("%lf", &a);
	printf("b->");	scanf("%lf", &b);
	printf("c->");	scanf("%lf", &c);

	calc(a, b, c, &ans1, &ans2); // Answers are included in ans1 and ans2.

	if (ans1 == ans2) // If ans1 and ans2 are same answer
	{
		printf("%lfx^2+%lfx+%lf=0の解は%lfです。\n", a, b, c, ans1);
	}
	else
	{
		printf("%lfx^2+%lfx+%lf=0の解は%lfと%lfです。\n", a, b, c, ans1, ans2);
	}
}