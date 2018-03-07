#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%2==0)
{
c++;
}
}
if(c==0)
{
printf("prime number");
}
else
{
printf("composite number");
}
return 0;
}
