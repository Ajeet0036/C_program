#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0 , max = 0;
	printf("enter the data::\n");
	scanf("%d",&num);
	int temp;
	while(num)
	{
		temp=num%10;
		if(temp>max)
		max=temp;
		num=num/10;
	}
	printf("max digits of given number: %d\n",max);
}
