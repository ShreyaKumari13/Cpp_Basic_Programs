//C++ Program to raise any number X to power N
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int numX,powN,result;
    cout<<"Enter the number:";
    cin>>numX;
    cout<<"Enter the power:";
    cin>>powN;
    result = pow(numX,powN);
    cout<<"The number raise to the power is "<<result;
    return 0;
}
 