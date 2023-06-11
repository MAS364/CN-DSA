#include<iostream>
using namespace std;




void Rotate(int arr[], int n, int d){

int temp = arr[0];
for(int i=1; i<n; i++){
    arr[i-1]=arr[i];
 }
 arr[n-1]=temp;
}

int main(){
int arr[]={1,2,3,4,5,6,7};
Rotate(arr,7,3);
for(int i=0; i<7 ;i++){
    cout<<arr[i]<<" ";
}
}
