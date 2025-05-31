#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"enter the n  number:";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        fact=fact*i;
        cout<<"factorial:"<<fact<<"\n";
    }
        cout<<"total  factorial:"<<fact<<"\n";
    return 0;
}