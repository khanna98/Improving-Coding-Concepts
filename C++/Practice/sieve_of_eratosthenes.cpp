#include<iostream>
using namespace std;

// Sieve Of Erathosthenes
void sieveOfErathosthenes(int n){
    bool prime[n+1] = {true};
    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main(){
    
    // Declare and Input
    int n;
    cin>>n;

    cout<<"The prime numbers are : "<<endl;
    sieveOfErathosthenes(n);
    return 0;
}