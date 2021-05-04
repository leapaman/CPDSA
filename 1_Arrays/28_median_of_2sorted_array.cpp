#include<bits/stdc++.h>
using namespace std;

void sortthearray(int arr[],int arr1[],int n,int m)
{
    if(n<m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i]>arr1[j])
                {
                    swap(arr[i],arr1[j]);
                }
            }
        }
    }
}


void solve()
{
   int arr[]={2,4,6,7,8};
   int arr1[]={-1,1,3,4,5,6};
   int n=5,m=6;
   sortthearray(arr,arr1,n,m);
   if((n+m)%2!=0)
   {
       int pos=(n+m)/2;
       pos=pos;
       if(pos>n)
       {
           int mpos=n-pos;
           cout<<arr1[mpos-1]<<endl;
       }
       else
       {
           cout<<arr[n-1]<<endl;
       }
   }
   else
   {
       int pos=(n+m)/2;
       
       if(pos>n+1)
       {
           int mpos=n-pos;
           int mpos1=n-pos+1;
           int ans=arr1[mpos]+arr1[mpos1];
           cout<<ans/2<<endl;
       }
       else if(pos<n & pos+1==n)
       {
           int mpos=pos-1;
           int mpos1=n-pos+1;
           int ans=arr[mpos]+arr1[mpos1];
           cout<<ans/2<<endl;
           
       }
       else
       {
           int mpos=pos-1;
           int mpos1=pos;
           int ans=arr[mpos]+arr[mpos1];
           cout<<ans/2<<endl;
       }
   }
}

 int main()
 {
     solve();
 }
