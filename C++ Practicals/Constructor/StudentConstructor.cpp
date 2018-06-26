#include<iostream>
using namespace std;
class student
{
        private:
                string name;
                int roll;
                int m1,m2,m3;

        public:
                float arg;

                student()
                {
                        m1=0;
                        m2=0;
                        m3=0;
                }
                void putmark(int mark1,int mark2,int mark3)
                {
                        m1=mark1;
                        m2=mark2;
                        m3=mark3;
                }
                int getmark()
                {
                        return (m1+m2+m3);
                }
                void findavg()
                {
                        arg=(m1+m2+m3)/3;
                        cout<<"Average="<<arg<<endl;
                }
};
int main()
{
        int m1,m2,m3,sum;
        student s;
        cout<<"Enter marks of 3 subjects"<<endl;
        cin>>m1;
        cin>>m2;
        cin>>m3;
        s.putmark(m1,m2,m3);
        sum=s.getmark();
        cout<<"Sum of marks="<<sum<<endl;
        s.findavg();
        return 0;
}

