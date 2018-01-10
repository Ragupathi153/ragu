#include<stdio.h> 
int main()
{
	int p,d=1,d1,i;
	printf("enter the base \n");
	scanf("%d",&d1);
printf("enter the power\n");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
d=d*d1;	
}
printf("%d",d);
}
