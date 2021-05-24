// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        
            if(A<B & B<C) return B;
            if(A<C & C<B) return C;
            
            if(B<A & A<C) return A;
            if(B<C & C<A) return C;
            
            if(C<A & A<B) return A;
            if(C<B & B<A) return B;
            
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends