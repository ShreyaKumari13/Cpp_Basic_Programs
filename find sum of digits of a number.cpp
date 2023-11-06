//C++ program to find sum of digits of a number
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,dig,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        dig = n % 10;
        sum = sum+dig;
        n = n/10;
    }
    cout<<"The sum of the digits of a number is:"<<sum;
    return 0;
}