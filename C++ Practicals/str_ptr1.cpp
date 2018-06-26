#include<iostream>
using namespace std;
int  main()
   {
        int   *p;        // uninitialised pointer
        *p =  100;    //  change the value at the unknown location pointed by p
        cout<<p;
        return 0;
}

