
#include <climits>
int findSecondLargest(int *input, int n)
{
    //Write your code here
   
    
    if ( n <=0 )
    {
        return INT_MIN;
    }
    
     int largest = INT_MIN;
     int seclargest = INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        if(input[i] > largest)
        {
            seclargest = largest;
            largest = input[i];
        }
        
        else 
            
        {
            if (input[i] > seclargest && input[i]!=largest)
                seclargest =  input[i];
            
        }
        
    }
        
        return seclargest;
    
    
}