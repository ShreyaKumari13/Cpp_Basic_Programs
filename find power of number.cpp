//C++ Program to Find Power of Number
#include<iostream>
using namespace std;
int main(){
    int num,pow;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter the power:";
    cin>>pow;
    for(int i=1;i<pow;i++){
        num = num*pow;
    }
    cout<<"The power of the number is "<<num;
    return 0;
}