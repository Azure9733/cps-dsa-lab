#include <iostream>
using namespace std;

template<class T>
void maxmin(T a[],int n)
{
    int i;
    T temp;
    for(i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<"max="<<a[n-1]<<"\n"<<"min="<<a[0]<<"\n";
    cout<<"sorted list is: \n";
    for (i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int a[50],i,ch,n;
    double d[50];
    float f[50];
    char c[50];
    cout<<"1. integer"<<endl;
    cout<<"2. characters"<<endl;
    cout<<"3. float numbers"<<endl;
    cout<<"4. double numbers"<<endl;
    cout<<"enter corresponding index example: enter'1' for integers"<<endl;
    cin>>ch;
    cout<<"enter the n value\n";
    cin>>n;
    switch(ch)
    {
    case 1:
        cout<<"enter integer \n";
        for(i=0;i<n;i++)
            cin>>a[i];
        maxmin(a,n);
        break;
    case 2:
        cout<<"enter characters \n";
        for(i=0;i<n;i++)
            cin>>c[i];
        maxmin(c,n);
        break;
    case 3:
        cout<<"enter floatnumbers \n";
        for(i=0;i<n;i++)
            cin>>f[i];
        maxmin(f,n);
        break;
    case 4:
        cout<<"enter doublenumbers \n";
        for(i=0;i<n;i++)
            cin>>d[i];
        maxmin(d,n);
        break;
    default:
        cout<<"Invalid choice enetered...";
    }
    return 0;
}
