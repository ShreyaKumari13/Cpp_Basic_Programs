//C++ program to Check Number is Palindrome or not
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,dig,num2;
    cout<<"Enter the number:";
    cin>>num;
    num2=num;
    while(num>0){
        dig = num%10;
        rev = (rev*10)+dig;
        num = num/10;
    }
    if(rev==num2){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
    return 0;
}