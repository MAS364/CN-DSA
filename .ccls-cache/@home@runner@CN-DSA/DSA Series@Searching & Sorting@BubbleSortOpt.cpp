#include<iostream>
#include <bits/stdc++.h>
using namespace std;



void printArray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

}


void BubbleSort(int arr[], int n){
for(int i=0; i<n-1; i++){
        bool swapped = false;
    for(int j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
    }

     if(swapped == false){
        break;
     }

}



}


int main(){
int arr[]= {50,40,30,20,10};
BubbleSort(arr,5);
printArray(arr,5);


}

