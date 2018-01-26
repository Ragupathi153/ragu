#include<stdio.h>
int main()
{
int a,b,c;
printf("enrer the numers:\n");
scanf("%d %d",&a,&b);
c=(a*b);
printf("%d",c);
if(c%2==0)
{
printf("even %d");	
}
else
{
printf(" odd %d");
}
return 0;
}
