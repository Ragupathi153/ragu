#include <stdio.h>

int main(void) {
char ch[30],i,count=0;
printf("enter the string:\n");
scanf("%[^\n]s",ch);
while(ch[i]!='\0')
{
	
	if(ch[i]>='0'&&ch[i]<='9')
	{
	count++;
}
i++;
}
printf("%d",count);
	return 0;
}
