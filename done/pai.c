#include <stdio.h>
#include <math.h>

double integral(double n)
{
        double area = 0;
        for(int i=1; i<n+1; i++)
        {
                double x = (i/n);
                area += ((1/n)*(sqrt(1-(x*x))));
        }

        return 4*area;
}

int main(void)
{
        double n = 0; // use integral
        double pai = 0; // pai
        printf("分割回数を入力してください。\n->");     scanf("%lf", &n);

        pai = integral(n);

        printf("結果は%lfです。", pai);

        return 0;
}
