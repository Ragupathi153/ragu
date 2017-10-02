#include<stdi.h>
#include<conio.h>
void main()
{
int i,f,l;
printf("enter the first and last interval");
scanf("%d%d",&f,&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d is an odd number",i);
}
}
}
