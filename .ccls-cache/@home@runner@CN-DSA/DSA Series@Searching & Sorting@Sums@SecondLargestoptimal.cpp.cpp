This is an efficient solution to find the second largest element in a single scan. In
this approach we will maintain both maximum and second maximum elements with us at a time
and will continue to update both by scanning the array only once.



#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int sLargest(int arr[], int n){

int largest = INT_MIN;
int slargest = INT_MIN;


for(int i=0; i<n; i++){
    if(arr[i] > largest){
        slargest = largest;
        largest = arr[i];
    }

    else if(arr[i] > slargest && arr[i]!=largest){
        slargest = arr[i];
    }
}

return slargest;

}




int main(){
int arr[]={2,6,3,1,5,9,8};
cout<<sLargest(arr,7);


}

