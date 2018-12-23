#include<iostream>
using namespace std;

int main(){
    char a[50];
    cin>>a;

    int i=0;
    if(a[i]=='9'){
        i++;
    }

    // Iterate over the remaining problems
    for(;a[i]!='\0';i++){
        int digit = a[i] -'0'; // Convert Character to Integer
        if(digit>=5){
            digit = 9-digit;
            a[i] = digit+'0'; // Convert back to character
        }
    }
    cout<<"Answer is "<<a<<endl;
}