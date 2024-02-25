#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter number for checking even or odd number::\n");
	scanf("%d",&num);
	if(num & 1)
		printf("odd::\n");
	else
		printf("even::\n");
	return 0;

}
