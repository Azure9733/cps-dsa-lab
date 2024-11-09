#include <iostream>
using namespace std;
class student
{
public:
    int m, e;
    void getdata()
    {
        cout<<"ENTER THY INTERNAL MARKS out of 30"<<endl;;
        cin>>m;
        cout<<"ENTER THY ENDSEM MARKS out of 50"<<endl;;
        cin>>e;
    }
};
class roll
{
public:
    int r;
    void rollno()
    {
        cout<<"ENTER THY ROLL NUMBER"<<endl;
        cin>>r;
    }
};
class percentage:public student,public roll
{
        public:
            int p;
            int f;
            void add()
            {
                f=m+e;
                cout<<"LET THY TOTAL MARKS BE:"<<f<<"out of 80"<<endl;
            }
            void percent()
            {
                p=f*100/80;
                cout<<"LET THY TOTAL PERCENTAGE BE:"<<p<<endl;
                cout<<"You wake up; Good Morning (might i say afternoon)"<<endl;
            }
};
int main()
{
        percentage g;
        g.getdata();
        g.rollno();
        g.add();
        g.percent();
    return 0;
}


