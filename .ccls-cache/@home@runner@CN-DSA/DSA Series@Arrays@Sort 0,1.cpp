#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

}

void Sort(int arr[], int n){

int i = 0 , j = n-1;
while(i<j){
    if(arr[i]==1 && arr[j]==0){
        swap(arr[i], arr[j]);
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
int arr[]= {0,1,0,1,0,1};
Sort(arr,6);
printArray(arr,6);

}

