#include<iostream>
using namespace std;

int Unique(int arr[], int n){
for(int i=0; i<n; i++){
    int j = 0;
for(; j<n; j++){
    if(arr[i] == arr[j] && i!=j){
        break;
    }
}

if(j==n){
    return arr[i];
  }
}


}


int main(){
int arr[]= {1,3,1,3,6,6,7,10,7};
cout<<Unique(arr,9);
}

