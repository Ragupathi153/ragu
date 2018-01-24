#include<stdio.h>
void main()
{
	int m1,m2,h1,h2,h,m;
	
	printf("enter the hours\n");
	scanf("%d%d",&h1,&h2);
	printf("enter the mintues:\n");
	scanf("%d%d",&m1,&m2);
	h=(h1-h2);
	m=(m1-m2);
            printf("%d  %d",h,m);
	
}
