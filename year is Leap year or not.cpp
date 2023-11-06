//C++ Program to Check whether year is Leap year or not
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0){
        cout<<"Is leap year";
    }
    else{
        cout<<"Isn't leap year";
    }
    return 0;
}