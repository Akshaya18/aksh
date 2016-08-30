#include<stdio.h>
#include<conio.h>
int main()
{
int f=1,i=1,num;
printf("enter the number");
scanf("%d",&num);
while(i<=num)
{
f=f*i;
i++;
}
printf("The factorial is %d",f);
return 0;
}
