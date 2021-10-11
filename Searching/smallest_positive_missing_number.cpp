#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    {   
        int j=0,count=0;
        for(int i=0;i<n;i++)
        {
             if(arr[i]>0 && arr[i]<=n)
             {
                 arr[j]=arr[i];
                 j++;
             }
             
             else
              count++;
        }
        
        // for(int i=0;i<j;i++)
        //  cout<<arr[i]<<" ";
         
        // cout<<endl;
       
      if(count==n)
       return 1;
        
        for(int i=0;i<j;i++)
        {   
            if(arr[i]<=j && abs(arr[abs(arr[i])-1])!=(-arr[abs(arr[i])-1]))
           {
            int x=abs(arr[i]);
             arr[x-1]= (-arr[x-1]);
           }
        }
        
        // for(int i=0;i<j;i++)
        // cout<<arr[i]<<" ";
        
       
        
        int k=1;
        
        for(int i=0;i<j;i++)
        {
            if(arr[i]>0)
            return k;
            
            else
            k++;
        }
       return k;
      }
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
