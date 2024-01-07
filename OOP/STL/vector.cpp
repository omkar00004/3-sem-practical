#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a(5,1); 
    /*In above vector initialisation we the 5 representating the size of vector
    and 1 is the staring value of vector ie it's index position.*/

    // we can copy vector
    vector<int> last(a);
    cout<<"Print a"<<endl;
    for(auto i: last){
        cout<<i<<" ";
    }cout<<endl;


    vector<int> v; 
    cout<<"Capcaity: "<<v.capacity()<<endl; //total amount of elements it can hold

    v.push_back(1);
    cout<<"Capcaity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capcaity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capcaity: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capcaity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capcaity: "<<v.capacity()<<endl;
    
    cout<<"Size: "<<v.size()<<endl;

     cout<<"element at 2 index "<<v.at(2)<<endl;

     cout<<"Front "<<v.front()<<endl;
     cout<<"back "<<v.back()<<endl;

    v.pop_back();
    cout<<"After pop"<<endl;
    cout<<"Back "<<v.back()<<endl;

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.clear();
    cout<<"Size: "<<v.size()<<endl;

    
}