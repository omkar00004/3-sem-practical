// prac1
#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int imag;

public:
    Complex(int real=0, int imag=0){
        this->real=real;
        this->imag=imag;
    } 

    // addition
    Complex operator+(Complex c2){
        Complex temp;
        temp.real=real+c2.real;
        temp.imag=imag+c2.imag;
        return temp;
    }

    // Multiplication
    Complex operator*(Complex c2){
        Complex temp;
        temp.real=real*c2.real;
        temp.imag=imag*c2.imag;
        return temp;
    }

    friend ostream &operator<<(ostream &out, Complex &p);
    friend istream &operator>>(istream &in, Complex &p);

};

ostream &operator<<(ostream &out, Complex &p){
    out<<p.real<<" + "<<p.imag<<"i"<<endl;
    return out;
}

istream &operator>>(istream &in, Complex &p){
    in>>p.real>>p.imag;
    return in;
} 

int main(){
    Complex c1;
    Complex c2;
    Complex c3;

    cout<<"Enter two complex numbers\n";
    cout<<"c1: ";
    cin>>c1;
    cout<<"c2: ";
    cin>>c2;

    int choice;

    do{
        cout<<"********** Complex Operations **********"<<endl;
        cout<<"1. Addition of two complex numbers."<<endl;
        cout<<"2. Multiplication of two complex numbers."<<endl;
        cout<<"3. End."<<endl<<endl;

    cout<<"Enter your choice\n:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        c3=c1+c2;
        cout<<"\nAddition of two complex numbers is "<<c3<<endl;
        break;

    case 2:
        c3=c1*c2;
        cout<<"\nMultiplication of two complex numbers is "<<c3<<endl;
        break;

    case 3:
        exit(0);
    }
   
    }while(choice!=3);

}