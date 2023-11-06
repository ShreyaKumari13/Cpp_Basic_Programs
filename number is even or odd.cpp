//C++ Program to Check given number is Even or Odd
#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter the number:";
    cin>>ch;
    if(ch%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}