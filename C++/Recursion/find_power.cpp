#include<iostream>
using namespace std;

int power(int a,int b){
    // base case
    if(b==0)
        return 1;
    
    // rec case
    return a*power(a,b-1);
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<power(n1,n2)<<endl;
    return 0;
}