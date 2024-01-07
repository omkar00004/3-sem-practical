// prac 3
#include<iostream>
#include<string>
using namespace std;

class Publication{
private:
    string title;
    int price;
public:
    void add(){
        cout<<"\nEnter the publication information..."<<endl;
        cout<<"Enter the title information: ";
        cin.ignore();
        getline(cin, title);
        cout<<"Enter price  of Publication: ";
        cin>>price;
    }

    void display(){
        cout<<"\n---------------------------------------------------------------------------"<<endl;
        cout<<"\nTitle of Publication: "<<title<<endl;
        cout<<"Price of Publication: "<<price<<endl;
    }
};

class book : public Publication{
    int pages_count;
public:
    void add_book(){
        // Implementing try
        try{
        add();
        cout<<"Enter pages count of Book: ";
        cin>>pages_count;
        if(pages_count<0)
        throw pages_count;
        }
        // Implementing catch
        catch(...){
            cout<<"\nInvalid page count!"<<endl;
            pages_count=0;
        }
    }

    void display_book(){
        display();
        cout<<"Pages count: "<<pages_count<<endl;
        cout<<"\n---------------------------------------------------------------------------"<<endl;
    }
};

class tapes : public Publication{
    int play_time;
public:
    void add_tapes(){
        // Implementing try
        try{
        add();
        cout<<"Enter the play duration of tape: ";
        cin>>play_time;
        if(play_time<0)
        throw play_time;
        }

        // Implementing catch
        catch(...){
            cout<<"Invalid value of play duration!"<<endl;
            play_time=0;
        }
    }
    void display_tapes(){
        display();
        cout<<"Play time: "<<play_time<<endl;
         cout<<"\n---------------------------------------------------------------------------"<<endl;
    }
};

int main(){
    book b1[10];
    tapes t1[10];
    int choice,b_count=0, t_count=0;

    do{
    cout<<"\n***** Publication Database *****"<<endl;
    cout<<"--------------Menu -------------"<<endl;
    cout<<"1. Add information to books"<<endl;
    cout<<"2. Add information to tapes "<<endl;
    cout<<"3. Display information of books"<<endl;
    cout<<"4. Display information of tapes"<<endl;

    cout<<": ";
    cin>>choice;
    switch(choice){

        case 1:
        b1[b_count].add_book();
        b_count++;
        break;

        case 2:
        t1[b_count].add_tapes();
        b_count++;
        break;

        case 3:
        cout<<"***** Book publication database system *****"<<endl;
        for(int i=0;i<b_count;i++){
            b1[i].display_book();
        }
        break;

        case 4:
        cout<<"***** Tape publication database system *****"<<endl;
        for(int i=0;i<t_count;i++){
            t1[i].display_tapes();
        break;
        }

        case 5:
        exit(0);
    }
    }while(choice!=5);

return 0;    
}