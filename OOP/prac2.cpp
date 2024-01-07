#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student{
public:
    string name,dob,address,year,mobile,blood_group;
    int div;
    int *roll;

    friend class Faculty;

    // default constructor
    Student(){
        roll=new int;
        *roll=div=0;
        name=dob=address=year=mobile="";
    }

    // destructor
    ~Student(){
        delete roll;
    }

    void set_data(){
        cout<<"\nEnter Student information...."<<endl;
        cout<<"\nEnter name: ";
        cin.ignore();
        getline(cin,this->name);
        cout<<"Enter Roll No. : ";
        cin>>*roll;
        cout<<"Enter year(1/2/3/4): ";
        cin>>year;
        cout<<"Enter DOB(dd/mm/yyyy): )";
        cin.ignore();
        getline(cin,this->dob);
        cout<<"Enter Mobile Number: ";
        cin.ignore();
        getline(cin,this->mobile);
        cout<<"Enter Blood group: ";
        cin>>blood_group;
        cout<<"Enter your address: ";
        cin.ignore();
        getline(cin,this->address);
    
    }   

    void get_data(){
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"\n* * * Student Information * * *"<<endl;
        cout<<"Name             :"<<name<<endl;
        cout<<"Roll.no          :"<<*roll<<endl;
        cout<<"Year(1/2/3/4)    :"<<year<<endl;
        cout<<"Division         :"<<div<<endl;
        cout<<"DOB              :"<<dob<<endl;
        cout<<"Blood Group      :"<<blood_group<<endl;
        cout<<"Mobile no.       :"<<mobile<<endl;
        cout<<"Address:         :"<<address<<endl;

        cout<<"-------------------------------------------------------------------"<<endl;
    }

    static void header(){
        cout<<"****** Student information system!!! ******"<<endl;
    }
};

// class faculty{

// private:
//     int id;
// public:
//     faculty(){
//         id=0;
//     }

//     faculty(const faculty &source){
//         id=source.id;
//     }

//     void f_display(Student & obj, int f_div){
//         try
//         {
//            if(obj.div==f_div)
//             obj.get_data();
//            else 
//             throw obj.div;
//         }
//         catch(...)
//         {
//             cout<<"\nInvalid division"<<endl;
//         }
        
//     }

// };

class faculty{
private:
    int id;
public: 
    faculty(){
        id=0;
    }
    faculty(const faculty &source){
        id=source.id;
    }
    void f_display(Student &obj, int fiv_div){
        try{
            if(obj.div==fiv_div)
            obj.get_data();
            else
            throw obj.div;
        }
        catch(...){
            cout<<"\nInvalid division."<<endl;
        }
    }


};

int main(){
    Student s[5];
    int count;
    int cnt; // for vector name
    faculty f;
    int choice;

    do{
        Student::header();
        cout<<"\n************** Menu **************\n"<<endl;
        cout<<"1. Add information"<<endl;
        cout<<"2. Display information"<<endl;
        cout<<"3. Faculty wise information"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            s[count].set_data();
            count++;
            break;

            case 2:
            for(int i=0;i<count;i++){
                s[i].get_data();
            }
            break;

            case 3:
            int f_div;
            cout<<"Enter the division of faculty: ";
            cin>>f_div;
            for(int i=0;i<count;i++){
                cout<<"\n* * * Student Information * * *"<<endl;
                f.f_display(s[i],f_div);
            }
            break;

            case 4:
            exit(0);
            break;

            case 5:
            exit(0);
        }

    }while(choice!=5);
}