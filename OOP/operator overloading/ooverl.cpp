#include<iostream>
#include<string>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(){
        name="";
        age=0;
    }

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
    friend ostream &operator<<(ostream &output, Person &p);
    friend istream &operator>>(istream &input, Person &p);


};

ostream &operator<<(ostream &output, Person &p){
    cout<<"What the heck"<<endl;
    cout<<"name is: "<<p.name<<" age is: "<<p.age<<endl;
    return output;
}

istream &operator>>(istream &input, Person &p){
    input>> p.name>> p.age;
    return input;
}

int main(){
cout<<"Enter the name and age"<<endl;
Person a;
cin>>a;
a.print();

return 0;
}

