#include<stdio.h>
#include<conio.h>
void main()
{
char s[]="helloworld";
int x=2,i;
clrscr();
for(i=0;i<strlen(s);i++)
{
if(i==0)
printf("%c",s[i]);
else if((i%x)!=0)
printf("%c",s[i]);
}
getch();
}