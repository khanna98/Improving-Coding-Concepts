#include<iostream>
using namespace std;

template <typename T>
class Vector{
    T *arr; // Pointer
    int cs;
    int capacity;
public:
    Vector(int ds=1){
        capacity = ds;
        arr = new int[capacity]; // Dynamic Memory Allocation --> Heap
        cs = 0;
    }

    Vector(const Vector<T> &X){
        // cout<<"Inside Copy Constructor"<<endl;
        cs = X.size();
        capacity = X.get_capacity();
        
        // Deep Copy
        arr = new T[capacity];
        for(int i=0;i<cs;i++){
            arr[i] = X.arr[i];
        }
    }

    void push_back(T data){
        if(cs==capacity){
            // Exapnd the current array
            T *oldArr = arr;
            arr = new T[capacity<<1];


            for(int i=0;i<capacity;i++){
                arr[i] = oldArr[i];
            }

            // Delete the old array
            delete[] oldArr;
            capacity = capacity<<1;
        }

        arr[cs++] = data;
    }

    void pop_back(){
        if(cs>0){
            // Delete the last element
            cs--;
        }
    }

    void set_capacity(int c){
        if(c>0){
            // Resize to capacity
            capacity = c;
        }
    }

    int get_capacity() const{
        return capacity;
    }

    T at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    // Unary !
    void operator!(){
        for(int i=0;i<cs;i++){
            arr[i] *= -1;
        }
    }

    // Binary +
    void operator+(const int n){
        for(int i=0;i<cs;i++){
            arr[i] += n;
        }
    }

    const void operator()(const string name){
        cout<<"Having Fun with "<<name<<endl;
    }

    // Return by reference 
    int& operator[](int i){
        return arr[i];
    }

    ~Vector(){
        cout<<"Deleting Vector"<<endl;
        if(arr!=NULL){
            delete[] arr;
            arr = NULL;
        }
    }
};

// Class K Bahar
ostream& operator<<(ostream &a, Vector<int> &v){
    for(int i=0;i<v.size();i++){
        a<<v[i]<<" ";
    }
    return a;
}

istream& operator>>(istream &is,Vector<int> &v){
    int len;
    is>>len;
    for(int i =0;i<len;i++){
        int temp;
        is>>temp;
        v.push_back(temp);
    }
    return is;
}


int main(void)
{   
    Vector<int> v,v1;

    // for(int i=0;i<=5;i++){
    //     v.push_back(i*i);
    // }

    cin>>v>>v1;

    // !v; // Negate the values in Vector
    // v+3;
    // v[2] = 13;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    cout<<v<<v1;

    // Vector<int> v2(v);
    // v2[0] = 100;
    
    // cout<<v2;
    cout<<endl;
    Vector<int> v3;
    // To make a Deep Copy-> Overload = operator
    v3 = v; // Copy Assignment Operator -> Make a Shallow Copy
    v3.push_back(20);
    v3[2] = 100;
    cout<<v3;


    cout<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.get_capacity()<<endl;
    // v("Mayank Khanna"); // Functional Object or Functor
    return 0;
}
