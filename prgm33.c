#include <stdio.h>
int main()
{
	char ch[30],i,count=0;
	printf("enter the string:\n");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]==' ')
		{
		count++;
		}
		i++;
	}
	printf("%d",count);
}
