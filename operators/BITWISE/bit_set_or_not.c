#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,num;
	printf(" enter data for checking data is set or not::\n");
	scanf("%d%d",&data,&num);
	data=data & (1<<num);
	if(data==0)
		printf("data not set::\n");
	else
		printf("data set::\n");
	
	return 0;
}
