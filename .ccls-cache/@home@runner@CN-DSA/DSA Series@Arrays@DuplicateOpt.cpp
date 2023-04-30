#include<iostream>
using namespace std;

int DUP(int arr[], int n){

int ans = 0;
for(int i=0; i<n; i++){
    ans = ans ^ arr[i];
}

for(int i=0; i<=n-2; i++){
  ans = ans ^ i;
}

return ans;

}


int main(){
int arr[]= {0,2,1,3,1};
cout<<DUP(arr,5);
}

