#include <stdio.h>

void printDigits(int number)
{
    if(number < 0) 
     {
       number *= -1;
       printf("- ");           
     }
     if(number > 10) 
     {
        printDigits(number / 10);
        printf(" ");
     }
     printf("%d", number % 10);      
}


int main() {
int digit;
printf("Enter you digit : ");
scanf("%d",&digit);

printDigits(digit);

	return 0;
}
