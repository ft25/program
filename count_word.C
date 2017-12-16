#include<stdio.h>
#include<conio.h>
void main()
{
char s[200];
int i,w=1,l;
clrscr();
printf("Enter the string:");
gets(s);
l=strlen(s);
printf("\n%d",l);
for(i=0;i!=l;i++)
{
if(s[i]==' ')
w++;
}
printf("\n The number of words is:%d",w);
getch();
}
