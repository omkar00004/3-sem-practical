#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s; 
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it=s.begin();

    s.erase(it);
     for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Count: "<<s.count(5)<<endl;
    /*The set::count() is a built-in function in C++ STL which returns the number of times an element occurs in the set. It can only return 1 or 0 as the set container contains unique elements only.
    It returns 1 if the value is present in the set container.
    It returns 0 if it is not present in the container.*/

     set<int>::iterator itr=s.find(5);

    cout<<"Value present at itr: "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }
}