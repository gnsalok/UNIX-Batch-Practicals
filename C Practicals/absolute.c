#include <stdio.h>
#include<math.h>

int absolute(int n)
{
    return sqrt(n*n);
}

int main()
{
    
int n;
printf("Enter your no. \n");
scanf("%d",&n);

int result = absolute(n);
printf("Obsolute value is :%d",result);

    return 0;
}
