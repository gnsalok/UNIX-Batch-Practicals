nclude<iostream>
using namespace std;
int  main()
{
      int   *p = NULL;

      *p =  100;     //  assignment to NULL pointer
      cout<<p;
      return 0;
}
[cdc1@UnixRLLServer cpp]$ cat array_ptr3.cpp
#include<iostream>
using namespace std;
int main()
{
int scores[]={5,10,15,20,25,30,35,40,45,50};
int *pi;
int n;
pi = &scores[3];
     n  = *++pi;
cout<<"*++pi="<<n<<endl;
     n   = *(pi++);

cout<<"*(pi++)="<<n<<endl;

     n  =  ++*pi;

cout<<"++*pi="<<n<<endl;
     n   =  *(pi  +  3);

cout<<"*(pi+3)="<<n<<endl;
     n  =   *pi--;

cout<<"*pi--="<<n<<endl;
     n   =  *pi  +  3;

cout<<"*pi+3="<<n<<endl;
     n  =  (*pi)--;
cout<<"(*pi)--="<<n<<endl;
}
