#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef unsigned int u32;
// typeof �� �ṹ�� ���ʹ��
typedef struct MyStruct
{
	int a;
	int b;
}TMP;

/*
	void ������
	1. ��������Ϊ�գ����庯��ʱ�������� void ���Σ� int fun(void) 
	2. ����û�з���ֵ�� void fun(void)
	3. ���ܶ��� void ���͵���ͨ������ void a; //err,�޷�ȷ�����ͣ���ͬ������Ҫ����ռ䲻һ��
	4. ���Զ���  void ָ������� void *p; //ok 32λ 4�ֽڣ� 64λ 8�ֽ�
	5. �������ͱ��ʣ��̶��ڴ���С����
	6. void *p ����ָ�룬������
*/

int main( )
{

	u32 t;
	TMP m;

	system("pause");
	return 0;
}

