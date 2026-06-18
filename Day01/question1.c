#include<stdio.h>
int main()
{
    int n,i,s=0;
printf("enter natural number");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    s=s+i;
}
printf("sum is=%d",s);
return 0;
}