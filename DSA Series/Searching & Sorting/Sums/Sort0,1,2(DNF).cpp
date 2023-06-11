#include<iostream>
using namespace std;



void Sort(int arr[], int n){
int start = 0, end = n-1, mid = 0;
while(mid<=end){
    if(arr[mid] == 0){
        swap(arr[start],arr[mid]);
        start++;
        mid++;
    }

    else if(arr[mid] == 1){
        mid++;
    }

    else if(arr[mid] == 2){
        swap(arr[mid], arr[end]);
        end--;
    }
}

}

int main(){
int arr[]= {0,1,1,0,1,2,1,2,0,0,0};
Sort(arr,11);
for(int i=0;i<11;i++){
    cout<<arr[i]<<" ";
 }
}
