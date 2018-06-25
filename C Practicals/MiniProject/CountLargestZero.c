#include<stdio.h>
int main()
{
        int i=0,j=0,k=0,l=0,p=0,n=0;
        char str[100];
        printf("Enter string:\n");
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
                if(str[i]=='0')
                {
                        j++;
                        k=i;
                        l=j;
                }
                else
                {
                        if(n<j)
                        {
                                p=k-l;
                                n=l;
                        }
                        j=0;
                }
        }
        if(n<j)
        {
                p=k-l;
                n=l;
        }
        printf("position=%d\nnumber of zero=%d\n",p+2,n);
}

