l
void reverse(int arr[], int start, int end){

        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }

    

void rotate(int *input, int d, int n)
{

reverse(input,0,d-1);
reverse(input,d,n-1);
reverse(input,0,n-1);
  
}