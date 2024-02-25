#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	// prefix increment decrement
	int x=4;
	printf("x=%d\t",x);
	printf("x=%d\t",++x);
	printf("x=%d\t",x);
	printf("x=%d\t",--x);
	printf("x=%d\n",x);
	//return 0;
	// postfix incement decrement
	printf("x=%d\t",x);
	printf("x=%d\t",x++);
	printf("x=%d\t",x);
	printf("x=%d\t",x--);
	printf("x=%d\n",x);
	return 0;
}
