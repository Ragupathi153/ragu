#include <stdio.h>
int main() 
{
int n,k,count=0;
printf("enter the number:\n");
scanf("%d",&n);
k=n;
while(k!=1)
{
	if(k%2!=0)
	{
	count++;
	break;
	}
	k=k/2;
}
if(count==0)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
