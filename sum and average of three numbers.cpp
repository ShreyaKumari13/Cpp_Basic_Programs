//C++ Program to calculate sum and average of three numbers
#include<iostream>
using namespace std;
int main(){
    int a[3];
    int avg,sum = 0;
    for(int i=0;i<3;i++){
        cout<<"Enter the num"<<i+1<<endl;
        cin>>a[i];
        sum = sum+a[i];
    }
    avg = sum/3;
    cout<<"The sum of the given three number is "<<sum<<endl;
    cout<<"The avg of the given three number is "<<avg<<endl;
    return 0;
}