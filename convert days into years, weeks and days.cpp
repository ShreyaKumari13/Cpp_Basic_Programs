//C++ Program to Convert Days Into Years, Weeks and Days
#include<iostream>
using namespace std;
int main(){
    int days,years,weeks;
    cout<<"Enter the days:";
    cin>>days;
    years = days/365;
    days = days%365;
    weeks = days/7;
    cout<<"No.of Years:"<<years<<"\nNo.of weeks"<<weeks<<endl;
    return 0;
}
 