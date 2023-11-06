//C++ Program to find Fibonacci Series
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=0,b=1,c;
//     cout<<"Enter the number:";
//     cin>>n;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     for(int i=1;i<n-1;i++){
//         c = a+b;
//         cout<<c<<endl;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int no,first=0,second=1,next;
    cout<<"How many terms u want to display:";
    cin>>no;
    for(int i=0;i<no;i++){
        cout<<" "<<first<<" ";
        next = first+second;
        first = second;
        second = next;
    }
    cout<<"\n";

    return 0;
}