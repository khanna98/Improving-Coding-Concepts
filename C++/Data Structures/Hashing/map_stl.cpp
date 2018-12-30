#include<iostream>
#include<unordered_map>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    unordered_map<string,int> map;
    map.insert({"coding",1});
    map.insert({"blocks",2});
    map.insert({"algo++",3});
    map.insert({"c++",4});

    map.erase("algo++");
    for(std::unordered_map<string,int>::iterator it=map.begin();it!=map.end();it++){
        cout<<(*it).first<<"-->"<<(*it).second<<endl;
    }
    return 0;
}
