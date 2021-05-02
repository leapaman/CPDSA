#define Int long long int
#define Loop for(int i=0;i<n;i++)
#define Test int t;cin>>t; while(t--)

using namespace std;



void solve()
{
    Int n;
    cin>>n;
    Int arr[n];
    Loop
    {
        cin>>arr[i];
    }
    
    Int m;
    cin>>m;
    sort(arr,arr+n);
    
    
    int sum=0,best=99999999;
    if(n==m)
    {
        cout<<arr[n-1]-arr[0]<<endl;
    }
    
    else
    {
       for(int i=0;i + m - 1 < n;i++)
    {
      
        sum=(arr[i+m-1]-arr[i]);
       
        if(best>sum)
        {
            best=sum;
           

        }
    }
    cout<<best<<endl; 
    }
    
    
    
}
int main()
{
    Test
    {
      solve();  
    }
    
}


