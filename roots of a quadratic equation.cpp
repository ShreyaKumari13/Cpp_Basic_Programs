//C++ Program to Find All Roots of a Quadratic Equation
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,x1,x2,realpart,imagpart,det;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    cout<<"Enter c:"<<endl;
    cin>>c;
    det = b*b-(4*a*c);
    if(det>0){
        x1 = ((-b)+sqrt(det))/(2*a);
        x2 = ((-b)-sqrt(det))/(2*a);
        cout<<"\nRoots are real and different."<<endl;
        cout<<"\nx1 = "<<x1<<endl;
        cout<<"\nx2 = "<<x2<<endl;
    }
    else if(det==0){
        cout<<"Roots are real and same."<<endl;
        x1 = (-b)/(2*a);
        cout<<"\nx1 = x2 ="<<x1<<endl;
    }
    else{
        realpart = -b/(2*a);
        imagpart = sqrt(-det)/2*a;
        cout << "\nRoots are complex and different."  << endl;
        cout << "\nx1 = " << realpart << "+" << imagpart << "i" << endl;
        cout << "\nx2 = " << realpart << "-" << imagpart << "i" << endl;
    }
    return 0;
}