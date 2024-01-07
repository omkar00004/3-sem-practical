// prac 5
#include<iostream>
using namespace std;

template<typename T>
void sort(T arr[],int n){
     for(int i=0;i<n-1;i++){
        int minIndex=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<"The sorted numbers are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
   int choice,n;
   int a[10];
   float b[10];
   do{
    cout<<"1.Sorting interger. "<<endl;
    cout<<"2.Sorting float."<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"***********************\n"<<endl;
    
    cout<<"Enter your Choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Sorting integers numbers"<<endl;
            cout<<"How many numbers do you want to sort: ";
            cin>>n;
            cout<<"What Number to add...."<<endl;
            for(int i=0;i<n;i++){
                cout<<": ";
                cin>>a[i];
            }
            sort<int>(a,n);
            break;

        case 2:
            cout<<"Sorting floating point numbers"<<endl;
            cout<<"How many numbers do you want to sort: ";
            cin>>n;
            cout<<"What Number to add...."<<endl;
            for(int i=0;i<n;i++){
                cout<<": ";
                cin>>b[i];
            }
            sort<float>(b,n);
            break;

        case 3:
        exit(0);
    }
   }
    while(choice!=3);
}
