#include<iostream>
#include<climits>
using namespace std;

int maxElement(int arr[], int ){

  int maxi = INT_MIN;
  for(int i=i+1; i<n; i++){
    if(arr[i] > maxi){
        maxi = arr[i];
    }
  }

  return maxi;
}



int main(){
int arr[]={-1,-5,-3,0,10};
cout<<maxElement(arr,5);

}
