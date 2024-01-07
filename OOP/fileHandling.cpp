#include<iostream>
#include<fstream>
using namespace std;

int main(){

    char arr[100];
    cout<<"Enter your name and age:";
    cin.getline(arr,100);
    
    fstream myfile("xyz.txt",ios::out | ios::app);
    // ofstream myfile("xyz.txt",ios::app); 
    myfile<<arr;
    myfile.close();
    cout<<"File write operation performed succesfully"<<endl;


    cout<<"\nReading from file operation."<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"Array content: "<<arr1<<endl;
    cout<<"File read operation completed."<<endl;
    obj.close();

return 0;
}

