#include<iostream>
using namespace std;

class Mybase{
    public:
        void show(){
            cout<<"Base class show function"<<endl;
        }

        virtual void print(){
            cout<<"Base class print function"<<endl;
        }
};

class MyDerived : public Mybase{
      void show(){
            cout<<"Derived class show function"<<endl;
        }

        virtual void print(){
            cout<<"Derived class print function"<<endl;
        }
}; 

int main(){
    Mybase *ptr;
    MyDerived obj;
    
    ptr=&obj;

    ptr->show(); // base class show fn
    ptr->print();  //derived class print fn

}