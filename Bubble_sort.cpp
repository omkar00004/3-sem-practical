#include<iostream>
using namespace std;

void sort(int arr[],int size){

    for(int i=1;i<size;i++){

        bool swapped=false;

        for(int j=0;j<size-i;j++){

            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
        if(swapped==false)
            break;
    }
}

void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){

    int list[5]={5,2,6,4,5};
    int size=sizeof(list)/sizeof(list[0]);
    sort(list,5);
    print_array(list,5);
}