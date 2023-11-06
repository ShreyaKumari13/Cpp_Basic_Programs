//C++ Program to find average of numbers
#include<iostream>
using namespace std;
int main(){
    int num,sum=0,avg;
    cout<<"Enter the frequency of the number:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter the number"<<i+1<<":";
        cin>>arr[i];
        sum = sum+arr[i];
    }
    avg = sum/num;
    cout<<"The average of the given numbers are:"<<avg;
    return 0;
}