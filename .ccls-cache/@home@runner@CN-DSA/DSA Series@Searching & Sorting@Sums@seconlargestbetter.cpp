:In this approach, you can find the largest element present in the array. So, to find
the largest element let us say largest is minus infinity initially, now scan the whole array once, if
a particular element is greater than the largest then update the largest element to that element.
Then make a second scan to find an element just smaller than the largest element.






int Largest(int arr[], int n){
int largest = INT_MIN;
for(int i=0; i<n; i++){
    if(arr[i] > largest){
        largest = arr[i];

    }
}
return largest;
}


int sLargest(int arr[], int n){ 
int sl = INT_MIN;
for(int i=0; i<n; i++){
  if(arr[i] > sl && arr[i]!= largest){
    sl = arr[i];
}

}

return sl;
}