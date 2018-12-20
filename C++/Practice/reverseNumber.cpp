#include<iostream>
using namespace std;
long long int reverseNum(int);
int main() {
    int n;
    cin>>n;
    cout<<reverseNum(n)<<endl;
	return 0;
}

long long int reverseNum(int num){
    long long int rev=0;
    int rem=0;
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num/=10;
    }
    return rev;
}