#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1,num2;
	printf(" enter the num1 and num2 value::\n");
	scanf("%d %d",&num1,&num2);
	num1^=num2^=num1^=num2;
	printf("swapping number:: %d to %d\n",num1,num2);
	return 0;
}
