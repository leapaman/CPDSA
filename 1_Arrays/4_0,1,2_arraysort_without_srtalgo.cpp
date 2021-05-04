// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int count=0,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]==0)
           {
               count++;
           }
           else if(arr[i]==1)
           {
               count1++;
           }
           else
           {
               count2++;
           }
        }
        
       
            for(int j=0;j<count;j++)
            {
                arr[j]=0;
            }
            for(int j=count;j<count+count1;j++)
            {
                arr[j]=1;
            }
            for(int j=count+count1;j<count+count1+count2;j++)
            {
                arr[j]=2;
            }
           
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
