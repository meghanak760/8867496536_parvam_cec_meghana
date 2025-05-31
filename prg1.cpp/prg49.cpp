 #include<iostream>
 using namespace std;
 int main()
 {
    int num,den;
    cout<<"enter the 2 numbers:"<<endl;
    cin>>num>>den;
    try
    {
        if(den==0)
            throw(den);
        else
            cout<<"the division is:"<<num/den<<endl;
    }
    catch(int d)
    {
        cout<<"denominator cannot be zero"<<d;
    }
    return 0;
 }



