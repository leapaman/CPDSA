// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   for(int i=0;i<n-1;i++)
   {
       swap(arr[i],arr[n-1]);
      
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
  
}

void rotate(int arr[], int n);

int main()
{
    solve();
    
}




