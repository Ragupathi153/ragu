#include<stdio.h>
#include<comio.h>
void main()
{
int n;
printf("enter any year");
scanf("%d",&n);
if(n%4==0)
{
printf("entered year is leap year");
}
else
{
printf("entered year is not a leap year");
}
}
