#include<iostream>
#include "hashtable.h"
using namespace std;

int main(){
    HashTable h;
    h.insert("Mango",100);
    h.insert("Banana",20);
    h.insert("Mangoshake",150);
    h.insert("Kiwi",120);
    h.insert("Pineapple",90);

    cout<<h.search("Mango")<<endl;

    h["Papaya"] = 30;
    h["Papaya"] += 50;
    h["Papaya"] *= 10;

    cout<<h.search("Papaya")<<endl;

    h.print();
}