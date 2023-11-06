//C++ Program to Check given number is Armstrong or Not
#include<iostream>
using namespace std;
int main(){
    int pow,num,num2,dig,rev=0;
    cout<<"Enter the num:";
    cin>>num;
    num2 = num;
    while(num>0){
        dig = num%10;
        pow = dig*dig*dig;
        rev = rev+pow;
        num = num/10;
    }
    if(num2==rev){
        cout<<"Given number is Armstrong!!";
    }
    else{
        cout<<"Given number is not Armstrong!!";
    }
    return 0;
}