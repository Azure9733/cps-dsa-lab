#include <iostream>
using namespace std;

template<class T>
void bubble(T a[],int n)
{
    int i,j;
    T temp;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                T temp;
                temp=a[j];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[6]={17,16,15,14,9,-1};
    char b[4]={'z','b','x','a'};
    bubble(a,6);
    cout<<"\n Sorted Order Integers:";
    for (int i=0;i<6;i++)
        cout<<a[i]<<"\t";
    bubble(b,4);
    cout<<"\n Sorted Order Characters:";
    for (int j=0;j<4;j++)
        cout<<b[j]<<"\t";
    return 0;
}
