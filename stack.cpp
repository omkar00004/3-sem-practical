#include<iostream>
#include<stack>
using namespace std;

int main(){
    // Creation of stack
    stack<int> s;
    
    // Insertion 
    s.push(2);
    // viewing top element
    cout<<s.top()<<endl;

    s.push(2);

    if(s.empty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"Stack is not empty"<<endl;


    // remove the element from top
    s.pop();

    // return the number of elements
    cout<<s.size()<<endl;
}