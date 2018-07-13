#include<stdio.h>
//int main()
int fact(int n)
{
if(n==0)   return 1;
else
{
fact(n-1);
printf("%d\n",n);
}
}

int main()
{
printf("%d",fact(5));
return 0;
}
