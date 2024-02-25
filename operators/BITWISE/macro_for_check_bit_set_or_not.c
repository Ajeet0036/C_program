#include<stdio.h>
#include<stdlib.h>

#define check_set_bit(data,pos) (data &= (1<<pos))
int main()
{
	int data,pos,res;
	printf("enter data and position number for checking bit is set or not::\n");
	scanf("%d%d",&data,&pos);
	res=check_set_bit(data,pos);
	if(res==0)
		printf("data not set::\n");
	else
		printf(" data set::\n");
}


