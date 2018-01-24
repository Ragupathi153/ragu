#include<stdio.h>
void main()
{
int a,b;
printf("enter the numbers:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf(" after swapping:%d %d\n",a,b);
}                             
