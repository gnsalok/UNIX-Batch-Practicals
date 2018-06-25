#include<stdio.h>
int main()
{
 float a,r,t,s=0.0;
 int i,n;
 a=1;
 r=0.5;
 t=1;
 
 printf("Enter the range :");
 scanf("%d",&n);
 
 for(i=1; i<=n; i++)
 {
     t=a/(1<<i);
     s+=t;
     printf("num = %f",t);
 }
  printf("sum=%f",s);
 
    return 0;
}




