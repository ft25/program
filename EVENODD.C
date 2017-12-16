#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a:");
scanf("%d",&a);
if(a&1)
{
printf("\nODD");
}
else
{
printf("\nEVEN");
}
getch();
}