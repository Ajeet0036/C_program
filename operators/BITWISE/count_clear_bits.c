#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,count=0;
	printf("enter data::\n");
	scanf("%d",&data);
	while(data != 0)
	{
		if(( data & 1)==0)
			count++;
		data=data>>1;
	}
	printf("count::%d\n",count);
}
