#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_array(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
}

// 如果数组作为函数参数， 数组形参退化为指针
void sort_array(int* a, int n)
{
	int temp = 0;
	// 选择法排序
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j]) // 升序
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(void)
{
	int a[] = { 10, 7, 1, 9, 4, 6, 7, 3, 2, 0 };
	int n;
	int i = 0;
	int j = 0;
	int temp = 0;

	n = sizeof(a) / sizeof(a[0]);

	printf("---排序前----\n");
	print_array(a, n);
	sort_array(a, n);
	printf("---排序后----\n");
	print_array(a, n);

	system("pause");
	return 0;
}