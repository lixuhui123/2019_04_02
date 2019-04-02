#include<stdio.h>
#include<stdlib.h>
void jiaohuan(int *p,int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
int main()
{
	int a = 0, b = 1;
	jiaohuan(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
