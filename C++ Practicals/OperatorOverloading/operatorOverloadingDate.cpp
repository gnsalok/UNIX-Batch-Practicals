#include<iostream>
using namespace std;
class Date
{
private:
int day;
int mth;
int year;
public:
 Date() : day(0), mth(0), year(0) { }
 Date(int d, int m, int y) : day(d), mth(m), year(y) { }
  Date operator+ (int n)
{
Date temp;
temp.day=day+n;
temp.mth=mth;
temp.year=year;
return temp;
}
 Date operator- (int n)
{
Date temp;
temp.day=day-n;
temp.mth=mth;
temp.year=year;
return temp;
}
void disp()
{
cout<<day<<"-"<<mth<<"-"<<year<<endl;
}
};
int main()
{
Date d1(4,04,2018);
Date ne;
int x;
cout<<"current date"<<endl;
d1.disp();
cout<<"enter a number by which date to be increase"<<endl;
cin>>x;
ne=d1+x;
cout<<"NEW DATE IS"<<endl;
ne.disp();
cout<<"enter a number by which date to be decrease"<<endl;
cin>>x;
ne=d1-x;
cout<<"NEW DATE IS"<<endl;
ne.disp();
return 0;
}

