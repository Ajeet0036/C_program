#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{	
	// max of three numbers
	
	int num1,num2,num3,max;
	printf(" enter the value of num1 and num2::\n");
	scanf(" %d %d %d",&num1,&num2,&num3);
	max=num1>num2?num2>num3? num1:num2:num3;
	printf(" max is %d \n",max);
	






	// even number odd number
	/*
	int num1,result;
	printf("enter the value of num1::\n");
	scanf("%d",&num1);
	result=num1/2==0?printf("even::%d\n",result):printf(" odd::%d \n",result);
	*/
	/*
	int i=5,x;
	x=i++;
	printf(" x is %dand %d\n",x,i);
	*/
}
