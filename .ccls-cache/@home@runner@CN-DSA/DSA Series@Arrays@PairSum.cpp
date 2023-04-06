#include<iostream>
using namespace std;


int Count(int arr[], int n, int sum){

  int i=0,j=n-1,k=0,count=0;
  while(i<j){
    k = arr[i] + arr[j];
    if(k == sum){
      count++;
      i++;
      j--;
    }
    else if(k > sum){
      j--;
    }
    else{
      i++;
    }
  }
  return count;
}


int main(){
  int sum = 17;
  int arr[]= {1,5,7,10,11,16};

   cout<<Count(arr,6,17);
}
