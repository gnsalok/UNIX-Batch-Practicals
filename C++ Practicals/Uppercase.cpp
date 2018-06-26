#include<iostream>
using namespace std;

int main()
{
    string str;
    int i;
    cout<<"Enter a string:";
    getline(cin, str);


  for(i=0; i<=str.size(); i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"\nThe String in Uppercase = "<<str;
  return 0;
}
