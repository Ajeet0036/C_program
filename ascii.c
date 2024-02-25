#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/*
	char ch;
	int dig;
	printf(" enter the character\n");
	scanf("%c",&ch);
	printf(" enter the digits\n");
	scanf("%d",&dig);
	printf(" ascii value of character %c is %d\n", ch,ch);
	printf(" ascii value of character %d is %c\n",dig,dig);
	return 0;
	*/
	//char ch='1';
	/*
	char ch;
	printf(" enter character\n");
	scanf("%c",&ch);
	// for octal
	printf(" ascii octal value of character ch %c is %o\n",ch,ch);
	//  for  decimal
	printf(" ascii decimal value of character ch %c is %d\n",ch,ch);
	// for hexadecimal 
	printf(" ascii hexadecimal value of character ch %c is %x\n",ch,ch);
	*/
	/* %c,%d,%f, %o,%x,%s etc these all are conversion specifications
	 */
	int a;
	float b,c;
	printf("enter the value of a and b \n");
	scanf("%d %f",&a,&b);
	c=a+b;
	printf(" result is %f:\n",c);

}
