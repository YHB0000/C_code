#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( )
{

	int a;			// 4 ���ֽ�
	int b[10];		// 4 * 10 ���ֽ�

	/*
		���͵ı��ʣ� �̶��ڴ���С����
		����ͨ�� sizeof() ����
	*/
	printf("a-size:%d, b-size:%d\n", sizeof(a), sizeof(b));

	// ��ӡ��ַ
	// �������֣�������Ԫ�ص�ַ�������׵�ַ
	// b: ������Ԫ�صĵ�ַ�� һ��Ԫ�� 4 �ֽ�
	// &b: ����������׵�ַ��һ������ 4*10=40 �ֽ�
	printf("b:%d, &b:%d\n", b, &b);
	printf("b+1:%d, &b+1:%d\n",b+1 ,&b+1);

	// ָ�����ͳ��ȣ� 32 Ϊ���� 4
	//				  64 λ���� 8
	char****** p = NULL;
	int* q = NULL;
	printf("p:%d, q:%d\n", sizeof(p), sizeof(q));

	system("pause");
	return 0;
}
