#include<stdio.h>
void main()
{
	int i,a[10],n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",n/2);
}
