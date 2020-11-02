#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *my_fun1()
{
	char *str = "1234";
	char *test = "1111";
	//return test;
	return str;
}

char *my_fun2()
{
	char *str = "1234";
	char *test = "2222";
	//return test;
	return str;
}

int main( )
{

	char* x = NULL;
	char* y = NULL;

	x = my_fun1();
	y = my_fun2();

	printf("x:%s , x:%d\n", x, x);
	printf("y:%s , y:%d\n", y, y);

	system("pause");
	return 0;
}

