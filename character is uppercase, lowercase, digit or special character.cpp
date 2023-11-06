//C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter char:";
    cin>>a;
    if(isupper(a)){
        cout<<"Character is Uppercase";
    }
    else if(islower(a)){
        cout<<"Character is Lowercase";
    }
    else if(isdigit(a)){
        cout<<"Character is digit";
    }
    else{
        cout<<"Character is special character";
    }
    return 0;
}