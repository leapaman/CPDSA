// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Three pointer method
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int k)
    {
     sort(arr,arr+n);
     int l=0,r=0;
     for(int i=0;i<n-2;i++)
     {
         l=i+1;
         r=n-1;
         while(l<r)
         {
             int sum=arr[i]+arr[l]+arr[r];
             if(sum==k) return 1;
             
             else if(sum<k) l++;
             else r--;
         }
     }
     return 0;
    }
//Soting and then having three pointer to look for  the sum
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
