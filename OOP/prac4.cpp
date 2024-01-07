// prac 4
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Info{
    int roll;
    char name[100];
public:
    void get_info(){
        cout<<"Enter the roll.no of student: ";
        cin>>roll;
    
        ofstream myfile1("file.txt",ios::app);
        myfile1<<roll<<"\t";

        cout<<"Enter the name of student: ";
        cin.ignore();
        cin.getline(name,100);
        myfile1<<name<<"\t";
        myfile1.close();

        cout<<"\nFile write operation Completed\n"<<endl;

    }

    void print_info(){
        cout<<"Reading file operation."<<endl;
        ifstream obj("file.txt");
        obj.getline(name,100);
        cout<<"Roll no. followed by name: ";
        cout<<name<<endl;
        obj.close();
    }
};

int main(){
    Info obj;

    int choice;

    do{
    cout<<"** File Handling **"<<endl;
    cout<<"1.Add data to file."<<endl;
    cout<<"2.Display data from file."<<endl;
    cout<<"3.Exit."<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
    case 1:
    obj.get_info();
    break;

    case 2:
    obj.print_info();
    break;

    case 3:
    exit(0);
    }

    }while(choice!=3);
 
}