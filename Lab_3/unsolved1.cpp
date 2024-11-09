#include <iostream>
using namespace std;
class studentmid
{
public:
    int m;
    void getdata()
    {
        cout<<"ENTER THY INTERNAL MARKS"<<endl;;
        cin>>m;
    }
};
class studentend
{
public:
    int e;
    void getdata1()
    {
        cout<<"ENTER THY ENDSEM MARKS"<<endl;;
        cin>>e;
    }
};
class total: public studentmid, public studentend
    {
        int f;
        public:
        void add(){
        f=m+e;
        cout<<"LET THY TOTAL MARKS BE:"<<f<<endl;
        cout<<"You wake up; Good Morning (might i say afternoon)"<<endl;
    }
};
    int main()
    {
        total t;
            t.getdata();
            t.getdata1();
            t.add();
            return 0;
    }
