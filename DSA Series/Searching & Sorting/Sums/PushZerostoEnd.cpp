#include<iostream>
#include <bits/stdc++.h>
using namespace std;



void printArray(int ans[], int n){
for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
}

}


void PushZeros(int arr[], int n){
int temp[n], k = 0;
for(int i=0; i<n; i++){
    if(arr[i]!=0){
        temp[k] = arr[i];
        k++;
    }
}

for(int j=k; j<n; j++){
    temp[j] = 0;
}


for(int i=0; i<n; i++){
    arr[i] = temp[i];
}

}



int main(){

int arr[]={2,0,0,1,3,0,0};
PushZeros(arr,7);
printArray(arr,7);

}

