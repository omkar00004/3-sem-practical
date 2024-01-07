#include<iostream>
using namespace std;

class Distance{
    int meters;
public:
    Distance(){
        meters=0;
    }
    void displayData(){
        cout<<"Meters value :"<<meters<<endl;
    }
    // prototype
    friend void addValue(Distance &d);

};

void addValue(Distance &d){
    d.meters=d.meters+5;
}

int main(){

    Distance d1;
    d1.displayData();

    // Friend function call
    addValue(d1);
    d1.displayData();
return 0;
}