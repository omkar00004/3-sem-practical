#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="ok";
    m[4]="ram";
    m[2]="ko"; 

    m.insert({5,"Bheem"});
    m.insert({5,"Kumar"});

    cout<<"Before erase 4"<<endl;

    // maps shows sorted keys
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Count : "<<m.count(13)<<endl;

    cout<<"After erase 4"<<endl;
    m.erase(4);
     for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).second<<endl;
    }
}