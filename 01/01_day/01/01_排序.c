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

	printf("����ǰ\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");

	// ѡ������
	for ( i = 0; i < n -1 ; i++ )
	{
		for ( j = i; j < n; j++ )
		{
			if ( a[i] > a[j] ) // ����
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("�����\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
	// �㷨
	// 1.����
	// 2.��书��
	// 3.����
	// 4.����



	system("pause");
	return 0;
}