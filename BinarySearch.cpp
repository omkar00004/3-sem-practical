#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end=size-1;

    // int mid = (start+end)/2;
    int mid = start+(end-start/2);

    while(start<=end){

        if (arr[mid] == key){
            return mid;
        }
        
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    int mid = start+(end-start/2);
        
    }
    return -1;


}

int main(){

    int even_array[6] = {2,4,6,8,10,12};
    int odd_array[5] = {3,6,9,12,15};

    int even_value = BinarySearch(even_array, 6, 12);
    cout<<"The index of element 12 is: "<<even_value<<endl;

    int odd_value = BinarySearch(odd_array, 6, 12);
    cout<<"The index of element 12 is: "<<odd_value<<endl;


    return 0;
}