#include<iostream>
#include<string>
using namespace std;

class Name{
    string a;
public:
    void get(){
        cin>>a;
    }
    void operator++(Name t2){
       cout<<t2.a<<endl;
    }
};

int main(){
    Name t1,t2;
    cout<<"t1: ";
    t1.get();
    // cout<<"t2: ";
    // t2.get();
return 0;
}