// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int arr[],int n,int m,int current_min)
    {
        int student=1;
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>current_min) return false;
            
            if(curr_sum+arr[i]>current_min) 
            {
                student++;
                curr_sum=arr[i];
                
                if(student>m) return false;
            }
            
            else 
            curr_sum+=arr[i];
            
        }
        return true;
    }
    
    int findPages(int arr[], int n, int m) 
    {
        
        
        
        if(n<m)
        return -1;
        
        
        long long sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        long long start=0,end=sum;
        
        
        
        long long result=INT_MAX;
        
        while(start<=end)
        {
            long long mid=(start+end)/2;
            
            if(isPossible(arr,n,m,mid))
            {
                result=mid;
                end=mid-1;
                
            }
            
            else
            start=mid+1;
            
        }
        return result;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends