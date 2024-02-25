#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
int main()
{
	int data = 0, n = 0, set_count = 0, clr_cnt = 0;
	printf(" enter data ::\n");
	scanf("%d",&data);
	while(data)// != FALSE)
	{
		if((data & 1)==1)	
		set_count++;
		else
		clr_cnt++;

		data=data>>1;
		
	}

	printf("set_count:: %d  , clrCnt=%d \n",set_count, clr_cnt);
	
}
