#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
public:
    // default constructor
    Complex(){
        real=0;
        imag=0;
    }

    // Constructor
    Complex(int r,int i){
        real = r;
        imag = i;
    }
    void print(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex operator+(Complex const &c){  // c is object fo complex class here
        Complex temp;
        // c3=c1+c2;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

    Complex operator*(Complex const &c){
        Complex temp;
        temp.real=real*c.real;
        temp.imag=imag*c.imag;
        return temp;
    }
};

int main(){
    Complex c1(5,4);
    Complex c2(2,5);
    Complex c3; 

    // Addition of two complesx numbers
    c3=c1+c2;
    c3.print();
    cout<<endl;
    // Multiplication of two complex numbers
    c3=c1*c2;
    c3.print();


}