#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
	int num,i=0,num1=0,sum=0;
	printf(" enter number for find strong number::\n");
	scanf("%d",&num);
	int temp = num;
	printf(" given number is:%d\n",num);

	while(num)
	{
	num1 = num%10;
        printf("num1=%d\n",num1);
	
	sum += fact(num1);

	num /= 10;	
	}

	printf(" sum=%d , temp =%d \n",sum,temp);

	if (sum == temp)
	puts(" strong number");
	else
	puts(" Not a strong NUmber");
	

}

int fact(int temp)
{
	int n =1;
	while(temp)
	{
		n *= temp;
		temp--;
		
	}

	printf("fact=%d \n",n);

	return n;

}
