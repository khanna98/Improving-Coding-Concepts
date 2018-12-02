#include<iostream>
using namespace std;

string convert(string s){
    int n = s.length();
    s[0] = tolower(s[0]);

    for(int i=1;i<n;i++){
        if(s[i]==' ' && i<n){
            s[i+1] = tolower(s[i+1]);
            i++;
        }
        else{
            s[i] = toupper(s[i]);
        }
    }

    return s;
}

int main(){
    string str = "Google Case";
    cout<<convert(str)<<endl;
    return 0;
}
