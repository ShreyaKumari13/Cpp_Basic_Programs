//C++ Program to Check Whether a character is Vowel or Consonant
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        cout<<"Is vowel";
    }
    else{
        cout<<"Not vowel";
    }
    return 0;
}