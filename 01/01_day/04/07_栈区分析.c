#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* test1()
{
	char str[] = "awdafs"; // 栈区
	return str;
}

char* test2()
{
	char str[] = "awdafs";
	return str;
}

int main(int argc, char** argv)
{

	char buf[128] = { 0 };
	//strcpy_s(buf, 400,test1());
	//printf("buf : %s \n", buf); // 乱码，不确定

	char* p = NULL;
	p = test2();
	printf("p: %s\n", p);
	

	system("pause");
	return 0;
}

