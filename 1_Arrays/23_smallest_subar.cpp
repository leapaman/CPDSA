#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}// } Driver Code Ends




int sb(int arr[], int n, int x)
{
    int best=99999999,count=0,sum=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
        sum=sum+arr[j];
        count++;
        if(sum>x)
        {
            if(count<best)
            {
                best=count;
            }
            sum=0;
            count=0;
            break;
        } 
        }
       
    }
    return best;
    
}
