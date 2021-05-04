// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/

int check(int p)
{
   string str;
    while(p>0)
    {
        
        int digit=p%10;
        p/=10;
        str+=char(digit);
        
    }
    int j=str.size()-1;
    int i=0;
    while(i<str.size()/2)
    {
        if(str[i]!=str[j])
        return 0;
        
    }
    return 1;
}
int PalinArray(int arr[], int n)
{  
    for(int i=0;i<n;i++)
    {
      return check(arr[i]);  
    }
}
