#include<iostream>
#define test int t;cin>>t; while(t--)
using namespace std;

void reverse_a_array()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int j=n-1;
	for(int i=0;i<n/2;i++)
	{
		swap(arr[i],arr[j]);
		j--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	test
	{
		reverse_a_array();
	}
}
