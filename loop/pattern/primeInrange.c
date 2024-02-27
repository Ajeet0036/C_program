#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,i,s,min,max;
	printf(" enter min data:");
	scanf("%d",&min);
	printf("enter max data:");
	scanf("%d",&max);
	for(num=min;num<=max;num++)
	{
		s=sqrt(num);
		for(i=2;i<=s;i++)
		{
			if((num%i)==0)
				break;
		}
		if(i == s+1)
			printf("%d, ",num);
	}
	printf("\n");
}
