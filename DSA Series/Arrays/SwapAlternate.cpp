#include<iostream>
#include<climits>
using namespace std;

void printArray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

}

void SwapAlternate(int arr[], int n)
{
   for(int i=0; i<n-1; i+=2){
    swap(arr[i],arr[i+1]);
   }
}


int main(){
int arr[]={10,20,30,40,50,60};
SwapAlternate(arr,6);
printArray(arr,6);
}


