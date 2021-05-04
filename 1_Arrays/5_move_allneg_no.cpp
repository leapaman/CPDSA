#include<iostream>
using namespace std;
void solve()
{
    int arr[8]={1,-2,3,-55,5,7,6,-33};
    int rem=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[rem]);
            rem++;
        }
        
    }
    
    for(int i=0;i<8;i++)
    {
    	cout<<arr[i]<<" ";
	}
}
int main()
{
    solve();
}
