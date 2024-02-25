#include<stdio.h>
#include<stdlib.h>
int cube(int);
int main()
{
	int data,num1=0,sum=0;
	printf(" enter number for find storm number::\n");
	scanf("%d",&data);
	int temp = data;
	while(data)
	{
	num1 = data%10;
        printf("num1=%d\n",num1);
	
	sum += cube(num1);

	data /= 10;	
	}

	printf(" sum=%d , temp =%d \n",sum,temp);

	if (sum == temp)
	printf(" storm number");
	else
	printf(" Not a storm NUmber");
	

}

int cube(int temp)
{
	int n =1;
	while(temp)
	{
		n =temp*temp*temp;
		break;
		
	}

	printf("cube=%d \n",n);

	return n;

}
