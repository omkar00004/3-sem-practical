// prac 6
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Item{
private:
public:
    string name;
    int quantity;
    int cost;
    int code;

    bool operator==(Item i1){
        return(code==i1.code);
    }

   friend ostream &operator<<(ostream& out, Item &t1);
   friend istream &operator>>(istream& in, Item &t1);
};

ostream &operator<<(ostream &out, Item &t1){
    out<<"\nName: "<<t1.name<<endl;
    out<<"Cost: "<<t1.cost<<endl;
    out<<"Quantity: "<<t1.quantity<<endl;
    out<<"Code: "<<t1.code<<endl;
    out<<"\n----------------------------------------------------------------"<<endl;
    return out;
}

istream &operator>>(istream &in, Item &t1){
    cout<<"\nEnter Item name: ";
    in>>t1.name;
    cout<<"Enter cost: ";
    in>>t1.cost;
    cout<<"Enter quantity: ";
    in>>t1.quantity;
    cout<<"Enter code: ";
    in>>t1.code;
    return in;
}

vector<Item> read(){
    int n;
    Item k;
    vector<Item> j;
    cout<<"Enter total number of item: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        j.push_back(k);
    }
    return j;
}

void search(vector<Item> &j){
    Item k;
    cout<<"Enter the code: ";
    cin>>k.code;
    vector<Item>::iterator p;

    p=find(j.begin(),j.end(),k);
    if(p!=j.end())
    cout<<*p;
    else
    cout<<"\nNot found"<<endl;
}
void printFunc(Item &k){
    cout<<k;
}
void print(vector<Item> &j){
    for_each(j.begin(),j.end(),printFunc);
}

// sorting will be done on the base of code
bool sortFunc(Item &x, Item &y){
    return(x.code<y.code);
}

void sort(vector<Item> &j){
    sort(j.begin(),j.end(),sortFunc);
}
int main(){
    vector<Item> a;
    int choice;

    do{
        cout<<"1. read"<<endl;
        cout<<"2. print"<<endl;
        cout<<"3. search"<<endl;
        cout<<"4. Sort"<<endl;
        cout<<"5. Quit"<<endl;

        cout<<"Choose option: ";
        cin>>choice;
        switch(choice){
            case 1:
            a=read();
            break;

            case 2:
            print(a);
            break;

            case 3:
            search(a);
            break;

            case 4:
            sort(a);
            print(a);
            break;

            case 5:
            exit(0);
        }

    }while(choice!=5);

}