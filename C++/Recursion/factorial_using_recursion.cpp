#include<iostream>
using namespace std;

// Declare a Factorial Function
int fact(int n){
    // Base Case
    if(n==0){
        return 1;
    }

    // Rec Case
    int ans = n*fact(n-1);
    return ans;
}

int main(int argc, char const *argv[])
{
    // Declare and Input
    int n;
    cin>>n;

    // Function Call
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}
