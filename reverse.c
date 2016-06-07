#include<stdio.h>
void main()
{
int reverse=0,n;
scanf("%d",n);
while(n!=0)
{
reverse=reverse*10;
reverse=reverse+n%10;
n=n/10;
}
printf("%d",reverse);
}
