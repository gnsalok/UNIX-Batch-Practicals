#include<stdio.h>
#include<string.h>
int main()
{
  	char Str[100], temp;
  	int i, j, len;
 
  	printf("Please Enter any String :  ");
  	scanf("%[^\n]s",Str);
  	
  	len = strlen(Str) - 1;
//   	printf("Length of string %d\n",len);
 printf("%d",strlen(Str));
 
  	for (i = 0; i < strlen(Str)/2; i++)
  	{
  		temp = Str[i];
  		Str[i] = Str[len];
  		Str[len--] = temp;
  	}
 
  	printf("String after Reversing = %s",Str);
  	
  	return 0;
}
