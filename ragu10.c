#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("number of digits in an integr is %d",count);
}
