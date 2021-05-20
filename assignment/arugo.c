#include <stdio.h>
#define VIEW {printf("\nnum is %d cur is %d Top is %d\n", num, cur, Top);for (int x = 0; x <= 9; ++x){printf("%d ", D[x]);};printf("\n");for (int y = 0; y <= 9; ++y){printf("%d ", P[y]);};printf("\n");}

int main(int argc, char const *argv[])
{
	int D[] = {-1, -1, 13, -1, 94, -1, -1, -1, 65, -1};
	int P[] = {-1, -1, 4, -1, -1, -1, -1, -1, 2, -1};

	int Top, num, data, cur, prv, i, j, k, temp = 0;
	Top = 8;
	num = 3;

	while (1)
	{
		i = 0;
		j = 0;
		k = 0;
		temp = 0;
		VIEW;

		printf("Enter number\n->");
		scanf("%d", &data);
		if (num == 10)
		{
			printf("追加不可\n");
		}

		else
			{
			if (data == D[Top])
			{
				temp = Top;
				Top = P[Top];
				P[temp] = -1;
				D[temp] = -1;

				i = 10;
				j = 10;
				k = 10;
			}

			while(i <= 9) // 同じデータを見つける作業
			{
				if (D[i] == data)
				{
					while (j <= 10)
					{
						if (P[j] == i)
						{
							P[j] = P[i];
							j = 10;
						}
						j = j + 1;
					}
					D[i] = -1;
					P[i] = -1;
					num = num -1;
					i = 10;
					k = 10;
					printf("Deleted\n");
				}
				i = i + 1;
			}

			while (k <= 9)
			{
				if (D[k] == -1)
				{
					cur = Top;
					while(cur != -1)
					{
						prv = cur;
						cur = P[cur];
					}
					D[k] = data;
					P[prv] = k;
					num = num + 1;

					k = 10;
					printf("Added\n");
				}
				k = k + 1;
			}
		}

	}
	return 0;
}