#include<stdio.h>
int main()
{
int i,n,c,j;
int reg[10];
printf("enter n");
scanf("%d",&n);
printf("enter the numbers");
while(i<n)
{
scanf("%d",&reg[i]);
i++;
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(reg[i]==reg[j])
{
c++;
reg[j]='\0';
}
}
if(c>1)
{
printf("%d",reg[i]);
c=0;
}
}
return 0;
}
