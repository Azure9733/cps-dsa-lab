#include <iostream>
#include<cmath>
using namespace std;
void printSequence(int sequence[],int current,int begin_from,int n,int k)
{
    if(current==k)
    {
        for(int i=0;i<k;i++)
        {
            cout<<sequence[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=begin_from;i<=n;i++)
    {
        sequence[current]=i;
        printSequence(sequence,current+1,i+1,n,k);
    }
}

int main()
{
    int k,n,i,j,l;
    cout<<"Enter the value of k:";
    cin>>k;
    cout<<"Enter the number of first n natural numbers"<<endl;
    cin>>n;
    int sequence[k];
    printSequence(sequence,0,1,n,k);
    return 0;
}
