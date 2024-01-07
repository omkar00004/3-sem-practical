#include<iostream>
#include<array>
using namespace std;

int main(){
    // basic array
    int basic[3]={1,2,3};

    array<int,4> a={1,2,3,4};

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    cout<<"Element at index 2 : "<<a.at(2)<<endl;

    cout<<"array is empty or not "<<a.empty()<<endl;

    cout<<"First element: "<<a.front()<<endl;
    cout<<"Second element "<<a.back()<<endl;
    
    return 0;
    }