#include<iostream>
using namespace std;
int main()
{
    float principal,rate,time,simpleinterest;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time in years: ";
    cin >> time;
    simpleinterest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << simpleinterest << endl;
    return 0;
}