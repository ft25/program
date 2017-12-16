#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int i;
clrscr();
printf("Enter the string:");
gets(s);
if(!isdigit(s[0]))
printf("True");
else
printf("False");
getch();
}