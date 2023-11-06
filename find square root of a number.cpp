//C++ program to find Square Root of a Number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,root;
    cout<<"Enter the number:";
    cin>>n;
    root = pow(n,0.5);
    cout<<"The square root of the number is:"<<root;
    

    return 0;
}