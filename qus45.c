#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter the numers:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("sum is %d",count);
}
