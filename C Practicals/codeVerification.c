#include<stdio.h>
int main()
{
     int a = 3, b =5, c= 12, d, e;
     float   f = 1.5, g;
      
    
     d = a  /  b  *  c;
     printf("d = %d\n",d);
     
     e = (++d * c--) / a;
     printf("e = %d \n",e);
     
     g = (b / a ) * f;
     printf("g = %f \n", g);
     
     g = ( (float) b / a ) * f;
     printf("g = %f \n", g);

    return 0;
}
