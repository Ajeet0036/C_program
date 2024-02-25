#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data=65,res=0;
	while(data>0)
	{
		res=data%10;
		data/=10;
	}
	printf("%d\n",res);
}
