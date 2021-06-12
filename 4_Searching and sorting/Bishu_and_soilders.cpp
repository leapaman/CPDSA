#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
    int arr[n];
    
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int q;cin>>q;
	int power[q];
	for(int i=0;i<q;i++)
	{
		cin>>power[i];
	}
	
	sort(arr,arr+n);
	
	int temp=q;
	
	int j=0;
	
	while(temp-- && j<q)
	{
	int sum=0,count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=power[j])
		{
			count++;
			sum+=arr[i];
		}
		else break;
	}
	j++;
	cout<<count<<" ";
	cout<<sum<<" "<<endl;
	}
	
}