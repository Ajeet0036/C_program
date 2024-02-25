#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	if(data>=0)
	{

		printf("output=Area of circle:- %0.3f\n",PI * data * data); 
		printf("Circumference:- %0.3f\n",2 * PI * data); 
	}
	else
	{
		printf("wrong input");
	}

}
