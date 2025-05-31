//calculate the total and average of array elements
#include <iostream>
using namespace std;
int main() {
   int arr[]={5,10,15,20,25};
   int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++){
         sum+=arr[i];
    }
    float average=(float)sum/size;
    cout<<"Sum of array elements: "<<sum<<endl;
    cout<<"Average of array elements: "<<average<<endl;
    return 0;
}