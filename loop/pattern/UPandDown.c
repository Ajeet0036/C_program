#include<stdio.h>
#include<stdlib.h>
int main()
{/*
	int i,j,n;
	printf("enter data:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
		for(j=1;j<=i;j++)
			printf("*");
	for(i=(n+1);i>0;i--,printf("\n"))
		for(j=1;j<=i;j++)
			printf("*");

*/
    	int n,A,i,j;
    	printf("Enter n value: ");
    	scanf("%d", &n);
    	for (i = -n; i <= n; i++,printf("\n")) 
    	{	
		A=(i<0)?-i:i;
        	for (j=1; j <=n; j++) 
		{
			A<j?printf(" "):printf(" %c",'A'+ j -1); 
        	}
    	}
    return 0;

}
