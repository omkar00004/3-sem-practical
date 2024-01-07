#include<iostream>
#include<stack>
#include<math.h>
#include<vector>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;

    for(int i=0;i<s.length();i++){

        if(s[i]>='0' && s[i]<='9'){
            cout<<"push: ";
            st.push(s[i]-'0');
            cout<<st.top()<<endl;

        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
        
        switch(s[i]){
            case '+':
            cout<<"push: ";
            st.push(op1+op2);
            cout<<st.top()<<endl;
            break;

            case '-':
            cout<<"push: ";
            st.push(op1-op2);
            cout<<st.top()<<endl;
            break;

            case '*':

            st.push(op1*op2);
             cout<<"push: ";
            cout<<st.top()<<endl;
            break;

            case '/':
            st.push(op1/op2);
             cout<<"push: ";
            cout<<st.top()<<endl;
            break;

            case '^':
            st.push(pow(op1,op2));
            break;
        }
    }
    }
    return st.top();
}
int main(){
    string infix;
    cout<<"Enter the Infix expression: ";
    cin>>infix;
    cout<<"Postfix Expression is: "<<postfixEvaluation(infix)<<endl;

}