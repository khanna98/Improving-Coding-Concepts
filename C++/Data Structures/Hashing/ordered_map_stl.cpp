#include<map>
#include<iostream>
using namespace std;

int main(){
    // map<string,int> mp; -> Here the data will be sorted lexicographically
    // mp.insert({"coding",1});
    // mp.insert({"blocks",2});
    // mp.insert({"algo++",3});
    // mp.insert({"c++",4});
    map<int,int> mp; // Here it will be sorted in normal order
    mp.insert({9,2});
    mp.insert({5,6});
    mp.insert({4,1});
    mp.insert({1,10});

    for(auto it=mp.begin();it!=mp.end();++it){
        cout<<(*it).first<<"-->"<<(*it).second<<endl;
    }

}