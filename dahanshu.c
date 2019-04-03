#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void init(int *arr1, int *arr2,int sum)
{
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0; i<=sum; i++)
	{
		j = i;
		t = arr1[j];
		arr1[j] = arr2[i];
		arr2[i] = t;
	}
	for (i = 0; i <= 19; ++i)
	{
		printf(" %d", arr2[i]);
	}
	printf("\n");
}

void reveres(int *arr2,int right)
{
	int left = 0;
	int t = 0;
	int i = 0;
	for (left = 0; left <= right; left++, right--)
	{
		t = arr2[left];
		arr2[left] = arr2[right];
		arr2[right] = t;
	}
	for (i = 0; i <= 19; ++i)
	{
		printf(" %d", arr2[i]);
	}
	printf("\n");
}
void empty(int *arr2,int a)
{
	int i = 0;
	for (i = 0; i <= a; ++i)
	{
		arr2[i] = 0;
	}
	for (i = 0; i <= 19; ++i)
	{
		printf(" %d", arr2[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[20] = { 0 };
	int sum = 0;
	sum = sizeof(arr1) / sizeof(arr1[0])-1;
	init(&arr1, &arr2,sum);

	reveres(&arr2 ,19);
	empty(&arr2,19);
	system("pause");
	return 0;
}