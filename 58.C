#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[100],c[100];
int i,j=0;
clrscr();
printf("Enter the string:");
gets(ch);
for(i=0;i<strlen(ch);i++)
{
if(ch[i]>'.')
{
c[j]=ch[i];
j++;
}
}
printf("\n Extension is:%s",c);
getch();
}