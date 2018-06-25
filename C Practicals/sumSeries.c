#include<stdio.h>
int main()
{
    float sum = 0.0, j = 2.0;
    int count, limit;
    printf("Enter The Limit:\t");
    scanf("%d", &limit);
    for(count = 1; count <= limit; count++)
    {
        sum =sum+(1/j);
        j = j * 2;
    }
    printf("\nSum of Series:\t %f", sum);
    printf("\n");
    return 0;
}

