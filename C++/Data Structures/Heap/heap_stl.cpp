#include<iostream>
#include<queue>
using namespace std;

class Compare{
public:
    bool operator()(int a,int b){
        return a>b;
    }
};

int main(){
    priority_queue<int> h_max; // Max Heap
    priority_queue<int,vector<int>,greater<int>> h_min; // Min Heap
    priority_queue<int,vector<int>,Compare> h; // User Defined Min Heap

    int d;
    cin>>d;
    while(d!=-1){
        h.push(d);
        cin>>d;
    }

    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
}