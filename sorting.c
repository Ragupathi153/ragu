#include<stdio.h>
void main()
{
int i,j,a[30],temp;
printf("enter the numbers:");
scanf("%d",&n);
printf("enter the array elements");
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("after sorting:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
