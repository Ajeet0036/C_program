#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,A,b;
	printf("enter n value :\n");
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=0;b<=n;b++)
		{
			A>b?printf(" "):printf("%c",65+b);
		}
	}
	/*
	 * 		   *
	 * 		  **
	 * 		 ***
	 * 		****
	 * 		 ***
	 * 		  **
	 * 		   *
	 */
}
