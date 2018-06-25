
#include<stdio.h>
int main()
{
    int i;
   for(i=1; i<=20; i++)
   {
       if(i%4==0)
       {
        printf("%d is divisible by 4\n",i);   
       }
       else
       {
           printf("%d is not divisible by 4\n",i);
       }
   }

    return 0;
}
