//C++ program to Find Largest Number among three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"Enter C:";
    cin>>c;
    if((a>b)&&(a>c)){
        cout<<"A is greater";
    }
    else if((b>a)&&(b>c)){
        cout<<"B is greater";
    }
    else{
        cout<<"C is greater";
    }
    return 0;
}