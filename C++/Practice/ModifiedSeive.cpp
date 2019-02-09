#include<iostream>
#include<cstring> // For the usage of memset
using namespace std;

// The complexity of this code is O(n*log(log(n)))
void SeiveOfEratosthenes(int m,int n){
    // Boolean array
    bool prime[n+1];

    // Initialize all elements as true 
    // using memset
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }

    // Since we only to find the prime numbers, p>=2 and p<=n;
    if(m<=1){
        m=2;
    }
    int count=0;

    // Count the number of primes
    for(int i=m;i<=n;i++){
        if(prime[i]){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        SeiveOfEratosthenes(a,b);
    }
    return 0;
}