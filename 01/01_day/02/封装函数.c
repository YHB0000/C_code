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

// ���������Ϊ���������� �����β��˻�Ϊָ��
void sort_array(int* a, int n)
{
	int temp = 0;
	// ѡ������
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j]) // ����
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

	printf("---����ǰ----\n");
	print_array(a, n);
	sort_array(a, n);
	printf("---�����----\n");
	print_array(a, n);

	system("pause");
	return 0;
}