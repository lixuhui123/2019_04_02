#include<stdio.h>
#include<stdlib.h>
int panduan(int a)
{
	int i = 0;
	for (i = 2; i <= a - 1; ++i)
	{
		if (0 == a % i)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int a = 0;
	printf("������һ��Ҫ�жϵ�����\n");
	scanf("%d", &a);
	printf("%d\n",panduan(a));
	system("pause");
	return 0;
}
