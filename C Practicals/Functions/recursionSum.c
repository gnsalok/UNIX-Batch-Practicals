#include <stdio.h>
int sum(int ary[],  int N){
    if (N <= 0)
        return 0;
    return (sum(ary, N - 1) + ary[N - 1]);
    
}

int main() {
    int result;
   int Arr[] = { 3, 4, 5, 12, 7, 20, 30 };
   
   result = sum(Arr,7);
   printf("Sum of array elements : %d\n",result);
   return 0;
}
