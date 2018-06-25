#include<stdio.h>

void printArray(int arr[],  int arysize)
{
    int i;
    int *ptr=&arr[0];
 
    printf("Array elements are:");
    for(i=0; i<arysize; i++)
    {
    printf("%d\t",*ptr++);
    }
}


int main()
{
int arr[]={5, 12, 7, 20, 14, 9};
printArray(arr,6);
return 0;
}
