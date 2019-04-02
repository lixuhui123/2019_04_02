#include<stdio.h>
#include<stdlib.h>
void biao(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int a = 0;
	printf("请输入要打印的最大数");
	scanf("%d", &a);
	biao(a);
	system("pause");
	return 0;
}
