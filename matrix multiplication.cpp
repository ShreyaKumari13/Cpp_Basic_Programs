//C++ Program for matrix multiplication
#include<iostream>
using namespace std;
int main(){
    int arr[50][50];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element ["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}