#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(7);

    // to binary search we first need to sort the vector

    sort(v.begin(),v.end());

    for(auto i:v){
        cout << i << endl;
    }

    bool found = binary_search(v.begin(), v.end(), 3);

    if(found){
        cout << "Element 3 is present in the vector." << endl;
    } else {
        cout << "Element 3 is not present in the vector." << endl;
    }

    cout<<upper_bound(v.begin(),v.end(),4)-v.begin() <<endl;

    return 0;
}
