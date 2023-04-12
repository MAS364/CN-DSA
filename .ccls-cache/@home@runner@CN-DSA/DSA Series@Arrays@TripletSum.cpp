// Run three for loop to find the all the possible combination for i , j & l
// arr[i] + arr[j] + arr[l] == TS



#include<iostream>
using namespace std;


int Triplet(int *arr, int n, int k){
    int count = 0;
  for(int i=0; i<n-2; i++){
    for(int j=i+1;j<n-1;j++){
      for(int l=j+1; l<n; l++){
        int sum = arr[i] + arr[j] + arr[l];
        if(sum == k){
          count++;
        }
      }
    }
  }
  return count;
}

int main(){
  int arr[]={1,4,6,8,10,45};
  cout<<Triplet(arr,6,13);
}
