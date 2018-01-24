#include<stdio.h>
void main()
{
	int i,a[20],max;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
		max=a[1];
		for(i=1;i<=10;i++)
		{
		if(a[i]>max)
		{
		max=a[i];	
		}
		}
	printf("greatest numeber is %d",max);
}
