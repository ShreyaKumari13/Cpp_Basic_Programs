//C++ Program to Find Quotient and Remainder
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the dividend: ";
    cin>>a;
    cout<<"Enter the divisor: ";
    cin>>b;
    cout<<"The Quotient of the given number is: "<<a/b<<endl;
    cout<<"The Remainder of the given number is: "<<a%b;
    return 0;
}