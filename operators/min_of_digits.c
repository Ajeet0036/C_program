#include<stdio.h>
int main()
{
    	int num, min = 9;  

   	printf("Enter the number:\n");
    	scanf("%d", &num);
    	int temp;

    	while (num > 0) 
    	{

        	temp = num % 10;

        	if (temp < min)
            	
		min = temp;

        	num = num / 10;
    	}	

    	printf("The minimum digit of the given number is: %d\n", min);

    	return 0;

}
