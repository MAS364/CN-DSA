#include<iostream>
using namespace std;



void Sort(int arr[], int n){

 int ct0 = 0, ct1 = 0, ct2 = 0;
 for(int i=0; i<n; i++){
    if(arr[i] == 0){
        ct0++;
    }
    else if(arr[i] == 1){
        ct1++;
    }
    else{
        ct2++;
    }
 }

 for(int i=0; i<ct0; i++){
    arr[i] = 0;
 }

 for(int i=ct0; i<ct0 + ct1; i++){
    arr[i] = 1;
 }

 for(int i=ct0 + ct1; i<n; i++){
    arr[i] = 2;
 }
}

int main(){
int arr[]= {0,1,1,0,1,2,1,2,0,0,0};
Sort(arr,11);
for(int i=0;i<11;i++){
    cout<<arr[i]<<" ";
}
}
