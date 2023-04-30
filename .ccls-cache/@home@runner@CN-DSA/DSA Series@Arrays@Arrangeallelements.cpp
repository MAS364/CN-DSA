void arrange(int arr[], int n){
    int val = 1;
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(val%2==1){
            arr[s++]=val;
            val++;
            //s++;
        }

        else{
            arr[e--]=val;
            val++;
            //e--;
        }
    }
}










//  rm .git/index.lock