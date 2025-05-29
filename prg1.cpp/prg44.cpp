#include<iostream>
using namespace std;
int main()
{
    int a=20,b=10,*p1=&a,*p2=&b;
    cout<<"Before swapping: a="<<a<<", b="<<b<<endl;
    *p1 = *p1 + *p2; 
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2; 
    cout<<"After swapping: a="<<a<<", b="<<b<<endl;
    cout<<"Value of a using pointer p1: "<<*p1<<endl;
    cout<<"Value of b using pointer p2: "<<*p2<<endl;
    return 0;
}