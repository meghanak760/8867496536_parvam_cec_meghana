#include<iostream>
using namespace std;
class Employee{
    public:
         Employee(){
            cout<<"Default constructor invoked"<<endl;
            }
            ~Employee(){
            cout<<"Destructor Evoked\n";
            }
        };
int main(void){
    cout<<"in main function"<<endl;
    cout<<"1st object\n";
    Employee e1;
    cout<<"2nd object\n";
    Employee e2;
    cout<<"ending main function"<<endl;
    return 0;
}