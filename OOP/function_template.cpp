#include<iostream>
using namespace std;

// int add(int x, int y){
//     return(x+y);
// }
// float add(float x, float y){
//     return(x+y);
// }
// double add(double x, double y){
//     return(x+y);
// } 

template <typename T,typename ok>
T add(T x, ok y){
    return(x+y);
}

int main(){

cout<<"Add two variable: "<<add<int>(2,3.98)<<endl;
cout<<"Add two variable: "<<add<float>(2.4f,3.1f)<<endl;
cout<<"Add two variable: "<<add<double>(2.984,3.879)<<endl;
return 0;
}