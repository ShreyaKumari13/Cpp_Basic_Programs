//C++ Program to Reverse a Number
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,dig;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        dig = num%10;
        rev = rev*10+dig;
        num = num/10;
    }
    cout<<"The reverse of the number is:"<<rev;
    return 0;
}