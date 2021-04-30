// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long maxval=arr[0],minval=arr[0],maxpro=arr[0];
	    for(long long i=1;i<n;i++)
	    { 
	       if(arr[i]<0)
	       swap(maxval,minval);
	       
	       if(arr[i]>arr[i]*maxval)
	       maxval=arr[i];
	       else maxval=arr[i]*maxval;
	       
	        if(arr[i]>arr[i]*minval)
	       minval=arr[i]*minval;
	       else minval=arr[i];
	       
	       
	       maxpro=max(maxpro,maxval);
	    }
	    	return maxpro;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
