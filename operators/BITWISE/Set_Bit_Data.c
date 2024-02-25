#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int data,i;
	printf("enter the var number and i value::\n");
	scanf("%d %d",&data,&i);
	data=data|(1<<i);
	printf("set data::%d\n",data);
	return 0;
}
