#include<iostream>
#include <bits/stdc++.h>
using namespace std;



void printArray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

}


void InsertionSort(int arr[], int size){

for(int i=1; i<size; i++){
int current = arr[i];
int j;
for(j = i-1; j>=0; j--){
    if(current < arr[j]){
        arr[j+1]= arr[j];
    }
    else{
        break;
    }
}

arr[j+1] = current;

}

}


int main(){
int arr[]= {50,40,30,20,10};
InsertionSort(arr,5);
printArray(arr,5);


}

