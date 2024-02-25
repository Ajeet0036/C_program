#include<stdio.h>
#include<stdlib.h>

#define clear_bit(data,pos) (data &= ~(1<<pos))
int main()
{
	int res,data,pos;
	printf("enter data and bit position number to clear::\n");
	scanf("%d %d",&data,&pos);
	res=clear_bit(data,pos);
	printf("res::%d\n",res);
	return 0;
}
