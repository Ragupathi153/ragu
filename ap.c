#include<stdio.h>
int main()
{
	int n,a,d,sum=0,i;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
	for(i=a;i<=n;i=i+d)
	{
		sum=sum+d*i;
	}
	printf("%d",sum);
	

	return 0;
}
