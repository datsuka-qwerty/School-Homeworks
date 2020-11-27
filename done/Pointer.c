#include <stdio.h>

void sum_diff(int, int, int*, int*);

int main(int argc, char const *argv[])
{
	int n1, n2, sum, diff = 0;

	printf("整数N1:");	scanf("%d", &n1);
	printf("整数N2:");	scanf("%d", &n2);

	sum_diff(n1, n2, &sum, &diff);

	printf("%dと%dとの和は%dです。\n", n1, n2, sum);
	printf("%dと%dとの差は%dです。\n", n1, n2, diff);
	return 0;
}

void sum_diff(int n1, int n2, int* sum, int* diff)
{
	*sum = n1 + n2;
	*diff = n1 - n2;
}
