#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum of 'n' natural numbers is %d",sum);
}
