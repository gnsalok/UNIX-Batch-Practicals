#include<stdio.h>
int FindLongestString(char **strings);
int main()
{
        int n=0,k=0,i,j;
        char str[5][20];
        char **ptr;
        printf("enter five strings\n");


        for(i=0;i<5;i++)
        {
                scanf("%s",str[i]);
        }
        for(i=0;i<5;i++)
        {

                ptr=str[i];

                k= FindLongestString(ptr);
                if(k>n)
                {
                        n=k;
                        j=i;
                }
        }
        printf("string at index %d is largest\n",j);
        return 0;
}
int FindLongestString(char **strings)
{
        return (strlen(strings));
}


