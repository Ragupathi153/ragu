#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=2;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
