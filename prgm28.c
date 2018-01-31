#include<stdio.h>
int main()
{
	int i,a[6],n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d %d",a[i],i);
		printf("\n");
	}
	return 0;
}
