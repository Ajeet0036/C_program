#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	// format for integer input
	// %wd
	/*
	int a,b;
	printf("enter thevalue of a and b:\n ");
	scanf("%2d %3d",&a,&b);
	printf(" result %d and %d is :\n",a,b);
	*/
	
	// format for floating point numeric input
	// %wf
	/*
	float a,b;
	printf(" enter value of a and b:\n");
	scanf("%3f %4f",&a,&b);
	printf(" result: %f and %f :\n",a,b);
	*/
	// format for floating point numeric output
	// %w.nf n stands for no of digits to be printed after decimal
	//
	// format for string input
	// %ws
	// %w.ns  for output use in  printf
	/*
	char str[8];
	printf(" enter strings :\n");
	//scanf("%3s",str);
	//printf(" strings: %s \n",str);
	scanf(" %8s",str);
	printf(" strings: %8.4s \n",str);
	*/

	// suppression character in scanf()
	// put * between % and conversion  specification
	// like :
	int a,b,c; 
	printf(" enter value a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	//input field is read but its  value is not assigned to any address.
	//it ignore that value 
}

