#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[] = { 10, 7, 1, 9, 4, 6, 7, 3, 2, 0 };
	int n;
	int i = 0;
	int j = 0;
	int temp = 0;

	n = sizeof(a) / sizeof(a[0]);

	printf("排序前\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");

	// 选择法排序
	for ( i = 0; i < n -1 ; i++ )
	{
		for ( j = i; j < n; j++ )
		{
			if ( a[i] > a[j] ) // 升序
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("排序后\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
	// 算法
	// 1.流程
	// 2.语句功能
	// 3.试数
	// 4.调试



	system("pause");
	return 0;
}