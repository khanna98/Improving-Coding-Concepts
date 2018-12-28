#include<iostream>
using namespace std;

int minSteps(int n,int *dp){
    // Base Case
    if(n==1)
        return 0;

    if(dp[n]!=0)
        return dp[n];    

    // Rec Case
    int x,y,z,ans;
    // x = y = z = ans = INT8_MAX;
    x = minSteps(n-1,dp) + 1;
    if(n%2==0)
        y = minSteps(n/2,dp) + 1;
    if(n%3==0)
        z = minSteps(n/2,dp) + 1;
    
    ans = min(x,min(y,z));
    cout<<ans;
    return dp[n] = ans;
}

int main(){
    int n = 10;
    int dp[n]={0};
    cout<<"Minimum Steps = "<<minSteps(n,dp)<<endl;
    return 0;
}