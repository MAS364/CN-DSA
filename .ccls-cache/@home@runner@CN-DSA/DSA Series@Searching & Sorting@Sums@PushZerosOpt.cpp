#include<iostream>
#include <bits/stdc++.h>
using namespace std;



void printArray(int ans[], int n){
for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
}

}


void PushZeros(int arr[], int n){

int k=0;
for(int i=0; i<n; i++){
    if(arr[i]!=0){
        swap(arr[i],arr[k]);
        k++;
    }
}


}


int main(){

int arr[]={2,0,0,1,3,0,0};
PushZeros(arr,7);
printArray(arr,7);

}

