#include<iostream>
using namespace std;
class Account{
    public:
    float salary=60000;
};
class programmer:public Account{
    public:
    float bonous=5000;
};
int main(void){
    programmer p1;
    cout<<"salary:"<<p1.salary<<endl;
    cout<<"bonous:"<<p1.bonous<<endl;
    return 0;
}

