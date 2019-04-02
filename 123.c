#include <stdio.h>
#include<stdlib.h>
int pandun(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	printf("ÇëÊäÈëÄê·İ");
	scanf("%d", &year);
	printf("%d\n", pandun(year));
	system("pause");
	return 0;
}