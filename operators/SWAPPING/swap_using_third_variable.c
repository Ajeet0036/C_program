#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num1,num2,temp;
	printf("enter the num1 and num2 value::\n");
	scanf("%d%d",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("swap number:: %d and %d\n",num1,num2);
	return 0;
}
