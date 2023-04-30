#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void Intersection(int arr1[], int arr2[], int m, int n){

for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i];
            arr2[j] = -1;
            break;
        }
    }
}

}


int main(){
int arr1[]= {2,2,8,9,1,2};
int arr2[]= {2,8,9,3};
Intersection(arr1,arr2,6,4);
}

