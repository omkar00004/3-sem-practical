#include<iostream>
using namespace std;

int search(int arr[], int size, int key){

    int start=0;

    for(int i=start ;i<size;i++){
        if (arr[i]==key)
        return i;
    }
    return -1;
}

int main(){

    int random_numbers[10]={1,4,2,6,7,8,9,0,3,5};
    cout<<search(random_numbers,10,5);
}