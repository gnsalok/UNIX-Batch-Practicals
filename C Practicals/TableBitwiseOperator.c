
#include<stdio.h>
int fun(int m, int n)
{
    int count=0;
    int res=0;
    while(m)
    {
        if(m%2==1)
         res=res + (n<<count);
        
         count++;
         m/=2;
    }
    return res;
}
int main()
{
  
  int n,i;
  printf("Enter you no.\n");
  scanf("%d",&n);
  
  for(i=1; i<=10; i++)
  {
      printf("%d * %d = %d\n",n,i,fun(i,n));
  }
    return 0;
}




