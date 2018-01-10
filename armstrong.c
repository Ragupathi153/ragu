#include<stdio.h>
int main()
{
	int n,sum=0,rem=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(n==sum)
	{
		printf("entered number is an armstrong number\n");
	}
	else
	{
		printf("entered number is not an armstrong number");
	}
	return 0;
}
