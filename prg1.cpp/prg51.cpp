#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    try
    {
        if(age<18)
        throw(age);
    }
    catch(int a)
    {
        cout<<"Access given";
    }
    catch(int a)
    {
        cout<<"Access denied Minimum age must be 18,but your age is: " << a << endl;
    }
    return 0;
    }