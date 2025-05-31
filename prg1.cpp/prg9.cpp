#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"fenter the three digit number:";
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
    {
        cout<<"enter the largest number is:"<<a<<endl;
    }
    else if(b>=a&&b>=c)
    {
        cout<<"enter the largest number is:"<<b<<endl;
    }
    else 
    {
        cout<<"enter the largest number is:"<<c<<endl;
    }
    return 0;
}