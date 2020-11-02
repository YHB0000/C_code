#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef unsigned int u32;
// typeof 和 结构体 结合使用
typedef struct MyStruct
{
	int a;
	int b;
}TMP;

/*
	void 无类型
	1. 函数参数为空，定义函数时，可以用 void 修饰： int fun(void) 
	2. 函数没有返回值： void fun(void)
	3. 不能定义 void 类型的普通变量： void a; //err,无法确定类型，不同类型需要分配空间不一样
	4. 可以定义  void 指针变量： void *p; //ok 32位 4字节； 64位 8字节
	5. 数据类型本质：固定内存块大小别名
	6. void *p 万能指针，函数，
*/

int main( )
{

	u32 t;
	TMP m;

	system("pause");
	return 0;
}

