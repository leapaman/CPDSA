// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
    
	int minSwaps(vector<int>&nums)
	{
	    int n=nums.size();
	    vector<pair<int,int>> vect(n);
	    for(int i=0;i<n;i++)
	    {
	        vect[i]={nums[i],i};
	    }
	    sort(vect.begin(),vect.end());
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(vect[i].second!=i)
	        {
	            count++;
	            swap(vect[i],vect[vect[i].second]);
	            i--;
	        }
	    }
	    return count;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends