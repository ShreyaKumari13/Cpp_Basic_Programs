//C++ Program to Find HCF of two numbers
#include<iostream>
using namespace std;

int main(){
    int n1,n2,hcf;
    cout<<"Enter the number1:"<<endl;
    cin>>n1;
    cout<<"Enter the number2:"<<endl;
    cin>>n2;
    for(int i=1;i<=n1 && i<=n2;++i){
        if((n1%i==0) && (n2%i==0)){
            hcf = i;
        }
    }
    cout<<"The hcf of the num1 "<<n1<<" and num2 "<<n2<<" is "<<hcf;
    return 0;
}