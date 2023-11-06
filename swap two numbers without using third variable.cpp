//C++ Program to Swap Two Numbers Without Using third variable
#include<iostream>
using namespace std;

void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void swapreferencevariable(int &p,int &q){
    int temp = p;
    p = q;
    q = temp;
}

int main(){
    int a,b;
    cout<<"Enter the num1: ";
    cin>>a;
    cout<<"Enter the num2: ";
    cin>>b;
    //swap(&a,&b);
    //cout<<"The num1 after swap is "<<a<<" and num2 is  "<<b<<endl;
    swapreferencevariable(a,b);
    cout<<"The num1 after swap is "<<a<<" and num2 is  "<<b<<endl;
    return 0;
}