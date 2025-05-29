#include<iostream>
using namespace std;
class polygon
{
    public:
        int a;
        int b;
        void getdata(int n,int m)
        {
            a=n;
            b=m;
        }
    };
class rectangle:public polygon
{
    public:
        int area()
        {
            int result = a*b;
            return result;
        }
    };
class triangle:public polygon
{
    public:
        int area()
        {
            int result = (a*b)/2;
            return result;
        }
    };
    class Triangle:public polygon
{
    public:
        int area()
        {
           float result =0.5*a*b;
            return result;
        }
    };
int main()
{
    rectangle r1;
    triangle t1;
    Triangle t2;
    int n,m;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>n>>m;
    r1.getdata(n,m);
    cout<<"Area of rectangle is: "<<r1.area()<<endl;
    
    cout<<"Enter the base and height of triangle: ";
    cin>>n>>m;
    t1.getdata(n,m);
    cout<<"Area of triangle is: "<<t1.area()<<endl;

    cout<<"Enter the base and height of Triangle: ";
    cin>>n>>m;
    t2.getdata(n,m);
    cout<<"Area of Triangle is: "<<t2.area()<<endl;
    return 0;
}