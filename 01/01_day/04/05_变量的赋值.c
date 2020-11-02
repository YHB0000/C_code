#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( )
{

	int a;
	int* p;

	// ¼ä½Ó¸³Öµ 
	a = 1;
	printf("a:%d\n", &a);
	p = &a;
	printf("p:%d\n", p);
	*p = 2;
	printf("a:%d p:%d\n", a, *p);

	system("pause");
	return 0;
}

