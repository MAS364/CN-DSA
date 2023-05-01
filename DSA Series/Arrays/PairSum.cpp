#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int pairSum(int arr[], int n, int num){
sort(arr, arr + n);
int i = 0, j = n-1, sum = 0, count=0;
while(i<j){
 sum = arr[i] + arr[j];
 if(sum == num){
    count++;
    i++;
    j--;
 }
 else if(sum < num){
    i++;
 }
 else{
    j--;
 }
}

return count;

}


int main(){
int arr[]= {2,8,6,10,5,-2,5};
int num = 10;
cout<<pairSum(arr,7,num);

}

