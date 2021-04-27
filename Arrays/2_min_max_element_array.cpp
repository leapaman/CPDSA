/* Maximum and minimum of an array using minimum number of comparisons */

/*This question is for finding minimum and maximum element from the array with minimum comparision*/

#include<iostream>
#define test int t;cin>>t; while(t--)
#define loop for(int i=0;i<n;i++)
using namespace std;
void min_max_element()
{
	int n;
	cin>>n;
	int arr[n];
	int min=100000000,max=-100000000;
	loop
	{
		cin>>arr[i];
		if(arr[i]<min)
		min=arr[i];
		
		else if(arr[i]>max)
		{
			max=arr[i];
		}
	
		
	}
		cout<<"minimum is : "<<min<<"maximum is : "<<max<<endl;
	
	
}
int main()
{
	test
	min_max_element();
}
