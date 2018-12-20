#include<iostream>
#include<vector>
using namespace std;

// Vector


int main(void){

    
    vector<int> v;
    for(int i=0;i<=5;i++){
        v.emplace_back(i*i);
    }

    // Print
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    // Print using for-each
    for(int x:v){
        cout<<x<<" ";
    }
    v.erase(v.begin(),v.begin()+2);

    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    return 0;
};