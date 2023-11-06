//C++ program to generate random numbers
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Generating random numbers"<<endl;
    for(int i=0;i<5;i++){
        num = (rand()%100)+1;
        cout<<"The number generated: "<<num<<endl;
    }
    return 0;
}