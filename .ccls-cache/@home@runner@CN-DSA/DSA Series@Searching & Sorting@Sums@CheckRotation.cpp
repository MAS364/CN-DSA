#include<iostream>
using namespace std;


int checkRotation(int arr[], int n){
for(int i=0; i<n-1; i++){
    if(arr[i] > arr[i+1]){
        return i+1;
    }
}


}

int main(){

int arr[]={5,6,7,1,2,3};
cout<<checkRotation(arr,6);

}
