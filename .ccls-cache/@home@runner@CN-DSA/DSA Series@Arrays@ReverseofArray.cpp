#include<iostream>
#include<climits>
using namespace std;

void printArray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

}

void Rev(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<=j){
     swap(arr[i],arr[j]);
     i++;
     j--;
    }
}


int main(){
int arr[]={10,20,30,40,50};
Rev(arr,5);
printArray(arr,5);
}


