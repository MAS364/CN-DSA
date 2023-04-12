
#include<iostream>
using namespace std;

int printArray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i];
}
}

int Sort(int *arr, int n){

 int i=0;
 int j=n-1;
 while(i<j){
    if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    else if(arr[i]==0){
        i++;
    }
    else{
        j--;
    }
 }

}

int main(){
  int arr[]={1,0,1,1,0,0,0,1};
  Sort(arr,8);
  printArray(arr,8);
}
