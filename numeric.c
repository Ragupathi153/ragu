#include<stdio.h>
#include<ctype.h>
void main()
{
	char a;
	printf("enter the string\n");
	scanf("%c",&a);
	if((a>='0')&&(a<='9'))
	{
	printf("%c is numeric",a);	
	}
	else
	{
	printf("%c is not numeric",a);
	}
}
