//Develop A Program In C++ To Create A Database Of Student’S Information System Containing Thefollowing Information: Name, Roll Number, Class, Division, Date Of Birth, Blood Group,Contact Address, Telephone Number, Driving License No. And Other. Construct The Database Withsuitable Member Functions. Make Use Of Constructor, Default Constructor, Copy Constructor,Destructor, Static Member Functions, Friend Class, This Pointer, Inline Code And Dynamic Memoryallocation Operators-New And Delete As Well As Exception Handling
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
   string name, DOB, blood_grp, addr, year_class, mob;
    int div;
    int *rollno;
public:
friend class faculty;   //faculty class is friend of student class

student()  // default constructor
{ 
  rollno = new int;
 *rollno = div= -1;   // output

  name = blood_grp = DOB = addr = year_class = mob = " ";
}

~ student()  //destructor
{
  delete rollno;  //deallocation of rollno
}

void add_data()  // function to add information in student database
{
     cout<<" \n Enter student information:";
     cout<<" \n  Enter Name:"<<endl;
     cin.ignore();          //to clear input buffer
     getline(cin,name);
       cout<<" Enter roll_no:";
            cin>> *rollno;
       cout<<" Enter year(SE,TE,BE):";
            cin>> year_class;
       cout<<" Enter Division (1/2/3/4/5):";
            cin>> div;
       cout<<" Enter DOB:";
            cin>> DOB;
       cout<<" Enter blood group:";
            cin>> blood_grp;
       cout<<" Enter mobile no:";
            cin>> mob;
       cout<<"Enter Address:";
            cin>> addr;
}

void display()  //function to display student information
{
                              cout<<"\n-----------------------------------------------------------------------------------------";
        cout  <<"\nName               :"<< name;
        cout  <<"\nRoll_no            :"<< *rollno;
        cout  <<"\nYear(SE/TE/BE)     :"<< year_class;
        cout  <<"\nDiv(1/2/3/4/5)     :"<< div;
        cout  <<"\nDOB                :"<< DOB;  
        cout  <<"\nBlood group        :"<< blood_grp;
        cout  <<"\nMobile no          :"<< mob;
        cout  <<"\nAddress            :"<< addr;
        cout  <<"\n----------------------------------------------------------------------------------";

}

static void header()  // static member function

{
cout<<"\n student Information System";
}
};    // student class end here



class faculty   // class faculty
{
        private:
            int id;
        public:
             
            faculty()  //default constructor
                  {
                     id=000;
                  }


faculty(const faculty &f1)  //copy constructor
   {
      id=f1.id;
   }

void f_display(student &obj,int f_d)   //function to display specific division information

{
 try 
   {
      if (obj.div == f_d)
         obj.display();
      else

        throw(obj.div);

    }
catch(int x)
{
cout<<"\n Invalid Division";
}
}
}; // faculty class end here

int main()
{
student st[5];
faculty f;
int ch=0,count=0;
do 
 {
   cout<<"\n Student Information System";
   cout<<"\n *********** Menu **********";
   cout<<"\n 1. Add information";
   cout<<"\n 2. Display information";
   cout<<"\n 3. Faculty wise Information";
   cout<<"\n 4. Exit";
   cout<<"\n  Enter your choice:";
   cin>>ch; 

   switch (ch)
   {
     case 1: //add the info
           st[count].add_data();
           count++;
           break;
     

     case 2:  //Display Information
           for(int j=0;j<count;j++)
            {
              student::header();  // static function call  
              st[j].display();
             }
           break;
     case 3:

            int f_div;
            cout<<"\n enter division of faculty:";
            cin>>f_div;
            for(int j=0;j<count;j++)
     {
      cout<<"\n student information system";
      f.f_display(st[j],f_div);
     }
     break;
     case 4:
            exit(0);   // successful exit of program

    }// end of the switch statement

}
while(ch!=4);  //end of the while
return 0;
}// end the main
 


