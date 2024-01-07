#include<iostream>
using namespace std;

void sort(int arr[],int n){

      for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
  
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int list[]={10,1,7,4,8,2,11};
    int size=sizeof(list)/sizeof(list[0]);
    sort(list,size);
    print_array(list,size);
    

}