//C++ Program to find Factorial of a Number
#include<iostream>
using namespace std;
int main(){
    int fact = 1,n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"The factorial of the number "<<n<<" is "<<fact;
    return 0;
}