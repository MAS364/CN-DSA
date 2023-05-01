#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int sizes, int num){
int start = 0, ends = sizes - 1;

while(start <= ends){
int mid = start + (ends - start) / 2;
if(arr[mid] == num){
    return mid;
}
else if(arr[mid] > num){
    ends = mid - 1;
}
else{
    start = mid + 1;
}

}

return -1;


}


int main(){
int arr[]= {10,15,20,21,22,40};
cout<<binarySearch(arr,6,21);

}

