#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int numerator,denominator;
int result{0};
cout<<"Enter numerator and denominator: ";
cin>>numerator>>denominator;

try{
    if(denominator==0){
    throw denominator;
    }
result=numerator/denominator; //division 
}
catch(int ex){
    cout<<"Exception: Divide by zero is not allowed"<<ex<<endl;
}
cout<<"division result: "<<result;

    return 0;
}