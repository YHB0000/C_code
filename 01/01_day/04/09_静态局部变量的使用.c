#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* test()
{
	static int a = 10;
	return &a;
}

int main( )
{
	int* x = NULL;
	x = test();
	printf(" x : %d\n",*x);
	system("pause");
	return 0;
}

