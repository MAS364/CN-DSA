#include<iostream>
#include<climits>
using namespace std;

int Sum(int arr[], int n){
int sum = 0;
for(int i=0; i<n; i++){
    sum = sum + arr[i];
}

 return sum;

}


int main(){
int arr[]={10,20,30,40,50};
cout<<Sum(arr,5);
}


