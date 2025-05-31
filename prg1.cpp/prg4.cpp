#include<iostream>
using namespace std;
int main()
{
    float m1=56,m2=78,m3=89,m4=90,m5=67,total=0,avg=0;
    cout<<"************ student Marks card*************";
    cout<<"\n********city engineering college*************";
    cout<<"\n********Name:meghana**************";
    cout<<"\n****************USN:4ME20IS001*********";
    cout<<"\n*********Branch:ISE****************";
    cout<<"\n*********Sem:2nd****************";
    cout<<"\n**********College:CEC****************";
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    //per=(total /300)*100;
    cout<<"\ntotal:"<<total;
    cout<<"\naverage:"<<avg;
    if(avg>90)
    cout<<"\ngrade:'A'";
    else if (avg>70)
    cout<<"\ngrade:'B'";
    else
    cout<<"\ngrade:'C'";
    cout<<"\n************End of marks card*************";
    return 0;
}
