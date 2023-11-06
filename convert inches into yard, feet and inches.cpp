//C++ Program to convert inches into yard, feet and inches
#include<iostream>
using namespace std;
int main(){
    int inches,feet,yard;
    cout<<"Enter the measurement in inches:";
    cin>>inches;
    yard = inches/432;
    inches = inches % 432;
    feet = inches/12; 
    cout<<"The inches in yard is:"<<yard<<endl; 
    cout<<"The inches in feet is:"<<feet<<endl; 


    return 0;
}