#include<iostream>
using namespace std;

int DUP(int arr[], int n){

for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i] == arr[j]){
            return arr[i];
        }
    }
}

}


int main(){
int arr[]= {0,7,2,5,4,7,1,3,6};
cout<<DUP(arr,9);
}

