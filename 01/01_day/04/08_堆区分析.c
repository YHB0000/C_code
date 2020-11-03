#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* test()
{
	char* tmp = (char*)malloc(100);		// 分配 400 字节的内存空间【堆区中】，将地址分配给 tmp 指针
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

