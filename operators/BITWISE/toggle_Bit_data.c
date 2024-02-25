#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int data,num;
	printf("enter data and num value for toggle data::\n");
	scanf("%d%d",&data,&num);
	data=data ^ (1<<num);
	printf("data :: %d\n",data);
	return 0;
}
