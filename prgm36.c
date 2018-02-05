#include <stdio.h>

int main()
{
char ch[30];
int i=0;
static int spl=0,num=0,alp=0,spc=0;
printf("enter the string:\n");
scanf("%[^\n]s",ch);
while(ch[i]!='\0')
{
if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
{
	alp++;
}
else if(ch[i]>='0'&&ch[i]<='9')
{
	num++;
}
else if(ch[i]==' ')
{
	spc++;
}
else
{
	spl++;	
}
i++;
}

printf("%d",spl);
	return 0;
}
