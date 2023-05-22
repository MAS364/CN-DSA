#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int sSmallest(int arr[], int n){

int smallest = INT_MAX;
int ssmallest = INT_MAX;


for(int i=0; i<n; i++){
    if(arr[i] < smallest){
        ssmallest = smallest;
        smallest = arr[i];
    }

    else if(arr[i] < ssmallest && arr[i]!=smallest){
        ssmallest = arr[i];
    }
}

return ssmallest;

}




int main(){
int arr[]={2,6,3,1,5,9,8};
cout<<sSmallest(arr,7);


}

