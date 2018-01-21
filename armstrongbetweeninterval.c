#include<stdio.h>
void main()
{
	int f,l,i,sum=0,rem=0,x,z;
	printf("enter the first and last number:\n");
	scanf("%d%d",&f,&l);
	for(i=f;i<=l;i++)
	{
		x=z=i;
		sum=0;
		while(x!=0)
		{
			rem=x%10;
			sum=sum+rem*rem*rem;
			x=x/10;
		}
		if(sum==z)
		{
			printf("%d",sum);
		}
	}
}
