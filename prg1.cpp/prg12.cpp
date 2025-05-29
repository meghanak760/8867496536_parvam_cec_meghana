#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int choice;
    float principal,rate,time,interset;
    int n;
    cout<< "Choose 1 for simple interest or 2 for compound interest:\n";
    cin>>choice;
    cout<<"enter principal Amount:";
    cin>>principal;
    cout<<"enter rate of interest:";
    cin>>rate;
    cout<<"enter time in years:";
    cin>>time;

    switch(choice)
    {
        case 1:
            interset = (principal * rate * time) / 100;
            cout << "The simple interest is: " << interset << endl;
            break;
        case 2:
            cout << "Enter number of times interest Applied per time period: ";
            cin >> n;
            interset = principal * (pow((1 + rate/(n*100)),n*time)-1);
            cout << "The compound interest is: " << interset << endl;
            break;
        default:
            cout << "Invalid choice!. " << endl;
            break;
    }
            return 0;
}