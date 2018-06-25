#include<stdio.h>
int main()
{
    int arr[20];
    int temp, i, j, k, count=3;
    printf("Enter three no. \n");
    for (i = 0; i < count; ++i)
      {
          scanf("%d",&arr[i]);
      }
    
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (arr[j] > arr[k])
         {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
         }
      }
   }
     printf("Ascending series is  : ");
     for (i = 0; i < count; ++i){
       printf(" %d\t", arr[i]);
     }
 
      return 0;
} 
