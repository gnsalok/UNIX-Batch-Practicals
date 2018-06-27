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
void disp()
{
cout<<day<<"-"<<mth<<"-"<<year<<endl;
}
friend void increment(Date &d3, Date &d4);
};
void increment(Date &d3, Date &d4)
{
d4.day=d3.day+1;
d4.mth=d3.mth;
d4.year=d3.year;
}
int main()
{
Date d1(4,04,2018);
Date d2;
increment(d1,d2);
cout<<"current date"<<endl;
d1.disp();
cout<<"D2 date"<<endl;
d2.disp();

return 0;
}

