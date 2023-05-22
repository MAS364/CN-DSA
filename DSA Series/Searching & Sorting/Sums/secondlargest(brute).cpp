The simplest solution of doing this problem is to sort the array in descending order
and return the second element, or sort in ascending order and return the 2nd element from last.
But, this won’t work in case of duplicate elements.
Time Complexity: Time complexity of this approach is O(nlogn) for sorting an array




#include<iostream>
#include <bits/stdc++.h>
using namespace std;



/*void printArray(int ans[], int n){
for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
}

}*/


int SecLargest(int arr[], int n){
sort(arr, arr + n);
int seclargest;
int largest = arr[n-1];


for(int i=n-2; i>=0; i--){
    if(arr[i]!= largest){
     seclargest = arr[i];
     break;
    }
}
return seclargest;

}




int main(){

int arr[]={2,6,3,1,5,9,8};
cout<<SecLargest(arr,7);
//printArray(arr,7);

}

