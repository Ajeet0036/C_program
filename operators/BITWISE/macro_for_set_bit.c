#include<stdio.h>
#include<stdlib.h>

#define set_bit(var,pos) (var |=(1<<pos))
int main()
{
	int var,pos,result;
	printf("enter variable number and bit pisition::\n");
	scanf("%d %d",&var,&pos);
	result=set_bit(var,pos);
	printf("result::%d\n",result);
	return 0;
}
