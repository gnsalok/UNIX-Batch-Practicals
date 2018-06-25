

#include<stdio.h>
int main()
{
int x;
const int y=20;
int *p;
const int *pci;

p=&x;

//checking verification


// p=&y;   this is fine
// pci=&x;  
// pci=&y; //not valid

printf("Address of p : %p",&p);
printf("Value of p : %d",*p);

}




