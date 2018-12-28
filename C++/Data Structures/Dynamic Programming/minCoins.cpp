#include<iostream>
using namespace std;
#define MAX 100000

int dp[MAX]={0};

// Top Down
int minCoins(int n,int*coins,int m){
    //Base Case
    if(n==0)
        return 0;
    if(dp[n]!=0)
        return dp[n];

    // Rec Case    
    int ans = INT_FAST8_MAX;

    for(int i=0;i<m;i++){
        if(coins[i]<=n){
            int subProb = minCoins(n-coins[i],coins,m);
            ans = min(ans,subProb+1);
        }
    }

    return dp[n]=ans;
}\

// Bottom Up
int minCoinsBottomUp(int n,int*coins,int m){
    int b[1000] = {0};
    b[0] = 0;

    for(int j=1;j<=n;j++){
        // Pick each type of coins
        int ans = INT_FAST8_MAX;
        for(int i=0;i<m;i++){
            if(j>=coins[i]){
                int subProb = b[j-coins[i]];
                ans = min(subProb+1,ans);
            }
        }
        b[j] = ans;
    }
    return b[n];
}

int main(int argc, char const *argv[])
{
    
    int n = 15;
    int coins[] = {1,7,10};
    int m = 3;
    cout<<"Top Down = "<<minCoins(n,coins,m)<<endl;
    cout<<"Bottom Up = "<<minCoinsBottomUp(n,coins,m)<<endl;

    // for(int i=0;i<n;i++)
        // cout<<dp[i]<<endl;
    return 0;
}
