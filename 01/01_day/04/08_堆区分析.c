#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* test()
{
	char* tmp = (char*)malloc(100);		// ���� 400 �ֽڵ��ڴ�ռ䡾�����С�������ַ����� tmp ָ��
	if (tmp == NULL)
	{
		return NULL;
	}
	strcpy_s(tmp, 100, "addggsa");
	return tmp;
}

int main( )
{

	char* p = NULL;
	p = test();
	if (p != NULL)
	{
		printf("p: %s\n", p);

		free(p);
		p = NULL;

		if (p != NULL)
		{
			free(p);
		}

	}
	


	system("pause");
	return 0;
}

