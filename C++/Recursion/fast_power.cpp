#include<iostream>
using namespace std;


// Time propotional to : log(b)
int fastPower(int a,int b){
    if(b==0){
        return 1;
    }

    int ans = fastPower(a,b/2);
    ans *= ans;

    // Check for ODD
    if(b&1){
        return a*ans;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<fastPower(a,b)<<endl;
    return 0;
}