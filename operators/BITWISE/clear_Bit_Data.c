#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int data,num;
	printf("enter data and complement num to clear bit from data::\n");
	scanf("%d %d",&data,&num);
	data=data & ~(1<<num);
	printf("cleared data::%d\n",data);
	return 0;
}
