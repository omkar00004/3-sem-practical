#include<iostream>
#include<vector>
using namespace std;

void sort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        int minIndex=i;

        for(int j=i+1;j<size;j++){
            if(arr[minIndex] > arr[j])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int name[]={5,4,3,2,1};
    int size=sizeof(name)/sizeof(name[0]);
    sort(name,size);
    print(name,size);
}