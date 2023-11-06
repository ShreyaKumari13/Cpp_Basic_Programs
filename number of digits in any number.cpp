//C++ Program to Find number of Digits in any number
#include<iostream>
using namespace std;
int main(){
    int num,digits=0;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        num = num/10;
        digits++;
    }
    cout<<"The digits of the number is:"<<digits;
    return 0;
}