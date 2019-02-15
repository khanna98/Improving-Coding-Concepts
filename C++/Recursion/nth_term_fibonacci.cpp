#include<iostream>
using namespace std;

// Function to find nth term
int fibo(int n){
    //Base Case
    if(n==0 or n==1)
        return n;

    // Rec Case
    int f1 = fibo(n-1);
    int f2 = fibo(n-2);
    return f1+f2;
}   

// Driver Function
int main(){
    // Declare and Input
    int n;
    cin>>n;

    // Function Call
    cout<<"The "<<n<<"th term is "<<fibo(n)<<endl;
    return 0;
}
