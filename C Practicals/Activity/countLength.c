#include <stdio.h>
#include<string.h>
void strlenNew(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
    i++;
    }
    printf("Length of string :%d",i);
}


int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    
    strlenNew(str);
    return 0;
	
}

