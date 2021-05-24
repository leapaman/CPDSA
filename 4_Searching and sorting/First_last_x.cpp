// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    vector<int> vect;
    vect.push_back(-1);
    vect.push_back(-1);
     int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x) 
        {
            vect[0]=i; 
            pos=i;
            break;
        }
        
        
    }
    
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x) pos=i;
    }
    
    vect[1]=pos;
    return vect;
}