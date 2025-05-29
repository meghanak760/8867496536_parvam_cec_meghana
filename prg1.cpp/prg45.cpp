#include<bits/stdc++.h>
using namespace std;
void func1()
{
    int val[3]={5,10,20};
    int *ptr=val;
    ptr=val;
    cout<<"Elements of the array are: ";
    cout<<ptr[0]<<" ";
    cout<<ptr[1]<<" ";  
    cout<<ptr[2]<<" ";
    cout<<endl;
}
int main()
{
    func1();
    return 0;
}


