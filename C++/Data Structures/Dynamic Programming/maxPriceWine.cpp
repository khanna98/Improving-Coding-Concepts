#include<iostream>
using namespace std;

int dp[100][100] = {0};

//Top Down Approach
int wines(int*a,int i,int j,int y){
    //Base Case
    if(i>j)
        return 0;
    if(dp[i][j]!=0)
        return dp[i][j];
    int op1 = a[i]*y + wines(a,i+1,j,y+1);
    int op2 = a[j]*y + wines(a,i,j-1,y+1);

    return dp[i][j] = max(op1,op2);
}


int main(){
    int arr[] = {2,3,5,1,4};
    cout<<wines(arr,0,4,1)<<endl;
    return 0;
}