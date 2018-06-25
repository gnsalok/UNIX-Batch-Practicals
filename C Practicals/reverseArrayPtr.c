#include<stdio.h>

void reverseArray(int arr[],  int arysize)
{
    int i;
    int *ptr=&arr[arysize];
    
    printf("Reverse elements of array are:");
    
    for(i=0; i<arysize+1; i++)
    {
    printf("%d  ",*ptr--);
    }
}

void printArray(int arr[],  int arysize)
{
    int i;
    int *ptr=&arr[0];
    
    printf("Elements of array are:");
    for(i=0; i<arysize; i++)
    {
      printf("%d  ",*ptr++);
    }
}

int main()
{
int i;
int arr[]={5, 12, 7, 20, 14, 9, 34, 23, 3, 54};
    printArray(arr,10);
    printf("\n");
    reverseArray(arr,10);
return 0;
}
