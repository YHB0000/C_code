#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( )
{

	int a;			// 4 个字节
	int b[10];		// 4 * 10 个字节

	/*
		类型的本质： 固定内存块大小别名
		可以通过 sizeof() 测试
	*/
	printf("a-size:%d, b-size:%d\n", sizeof(a), sizeof(b));

	// 打印地址
	// 数组名字，数组首元素地址，数组首地址
	// b: 数组首元素的地址， 一个元素 4 字节
	// &b: 整个数组的首地址，一个数组 4*10=40 字节
	printf("b:%d, &b:%d\n", b, &b);
	printf("b+1:%d, &b+1:%d\n",b+1 ,&b+1);

	// 指针类型长度， 32 为程序： 4
	//				  64 位程序： 8
	char****** p = NULL;
	int* q = NULL;
	printf("p:%d, q:%d\n", sizeof(p), sizeof(q));

	system("pause");
	return 0;
}
