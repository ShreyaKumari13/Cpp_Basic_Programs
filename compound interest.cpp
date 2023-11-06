//C++ Program to find Compound Interest
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float prin,rate,time,cou_int;
    cout<<"Enter principal:";
    cin>>prin;
    cout<<"Enter rate:";
    cin>>rate;
    cout<<"Enter time:";
    cin>>time;
    cou_int = prin*pow((1+rate/100),time);
    cout<<"The compound interest is "<<cou_int;
    return 0;
}
 