#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int Intersection(int arr1[], int arr2[], int m, int n){

sort(arr1, arr1 + m);
sort(arr2, arr2 + n);

int i=0,j=0;
while(i<m && j<n){
    if(arr1[i] == arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
        j++;
    }
    else if(arr1[i] < arr2[j]){
        i++;
    }
    else{
        j++;
    }
}

}


int main(){
int arr1[]= {2,2,8,9,1,2};
int arr2[]= {2,8,9,3};
Intersection(arr1,arr2,6,4);

}

