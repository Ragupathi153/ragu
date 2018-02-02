include <stdio.h>
int main()
{
	char ch[30],i,count=0;
	printf("enter the string:\n");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		if(ch[i]!=' '&&ch[i]!='\t'&&ch[i]!='\0')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
}
