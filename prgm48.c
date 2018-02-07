#include<stdio.h>
int main()
{
	int i,n,a[39],sum=0,avg=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
	}
	printf("%d",avg);
}
