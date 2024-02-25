#include <stdio.h>
#include <stdlib.h>
#define EVEN_ODD_CHECK(num) (num&1)
int main()
{
	int num = 0, res = 0;
	printf(" enter num value::\n");
	scanf("%d",&num);
	res = EVEN_ODD_CHECK(num);
	if(res==0)
		printf(" given number is even\n");
	else
		printf("given number is odd\n");
} 
